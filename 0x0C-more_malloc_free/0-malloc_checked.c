#include"main.h"
#include<stdlib.h>
#include<limits.h>
/**
*malloc_checked -function that allocates memory.
*@b: input parameter.
*/
void *malloc_checked(unsigned int b)
{
if(typeof(b)!=unsigned int)
{
return 98;
}
unsigned int *g;
g=(void *)malloc(sizeof(unsigned int)*b);
return g;
}
