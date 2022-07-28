#include"main.h"
#include<stdlib.h>
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
exit(98);
}
return g;
}
