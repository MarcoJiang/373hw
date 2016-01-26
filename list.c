#include <assert.h> 
#include <stdlib.h> 

 
#include "list.h" 
 
 
// Takes a valid, sorted list starting at `head` and adds the element 
// `new_element` to the list. The list is sorted based on the value of the 
// `index` member in ascending order. Returns a pointer to the head of the list 
// after the insertion of the new element. 
list_t* insert_sorted(list_t* head, list_t* new_element) { 
 	assert(head != NULL); 
 	assert(new_element != NULL); 
	list_t* t_head = (list_t *)malloc(sizeof(list_t));
	t_head->next = head;
	head = t_head;
 	list_t* cur = head->next;
	list_t* pre = head;
	while (cur != NULL)
	      {
	          if (new_element->index > cur->index) 
		     {
			 pre = cur;
			 cur = cur->next;
			 continue;
		     }
	          pre->next = new_element;
		  new_element->next = cur;
		  break;		
	      }
	if (cur == NULL)
	   {
	       pre->next = new_element;
	       new_element->next = NULL;	 
	   }	
	head = head->next;
  	return head; 
 } 
 
 
// Reverses the order of the list starting at `head` and returns a pointer to 
// the resulting list. You do not need to preserve the original list. 
list_t* reverse(list_t* head) { 
 	assert(head != NULL); 
	list_t *p1,*p2,*p3;
	p1 = head;
	p2 = p1->next;
	while (p2!=NULL)
	{
		p3=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p3;
	}
	head->next=NULL;
	head = p1;
 	return head; 
 } 
