#include"main.h"
#include<stdlib.h>
/**
*_calloc -function that allocates memory for array.
*@nmemb: input parameter.
*@size: input parameter.
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *d;
if(nmemb==0 ||size==0)
{
return NULL;
}
d=malloc(nmemb*size);
if(d==NULL)
{
return NULL;
}
for(i=0;i<(nmemb*size);i++)
{
d[i]=0;
}
return d;
}

