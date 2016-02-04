#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sort.h"

int compare(int a, int b) {
	    return b - a;
}

int compfunc(const void *p1,const void *p2)
{       
	return (*(int*)p2-*(int*)p1);
}
