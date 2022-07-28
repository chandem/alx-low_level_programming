#include"main.h"
#include<stdlib.h>
#include<limits.h>
/**
*malloc_checked -function that allocates memory.
*@b: input parameter.
*/
void *malloc_checked(unsigned int b)
{
char *g;
g=malloc(b);
if(g==NULL)
{
Exit(98);
}
return g;
}
