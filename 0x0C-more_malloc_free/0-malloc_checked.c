#include"main.h"
#include<stdlib.h>
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
char *g;
g=(void *)malloc(sizeof(unsigned int)*b);
return g;
}
