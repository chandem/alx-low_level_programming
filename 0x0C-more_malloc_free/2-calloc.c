#include"main.h"
#include<stdlib.h>
/**
*_calloc -function that allocates memory for array.
*@nmemb: input parameter.
*@size: input parameter.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char **d;
d=malloc(sizeof(char *)*nmemb);
for(i=0;i<nmemb;i++)
{
d[i]=malloc(sizeof(char)*size);
}
return d;
}
