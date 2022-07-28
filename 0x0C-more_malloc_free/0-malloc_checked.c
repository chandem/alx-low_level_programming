#include"main.h"
#include<stdlib.h>
/**
*malloc_checked -function that allocates memory.
*@b: input parameter.
*/
void *malloc_checked(unsigned int b)
{
if(sizeof(b)!=sizeof(unsigned int))
{
return 98;
}
char *g;
g=malloc(sizeof((int)*b);
return g;
}
