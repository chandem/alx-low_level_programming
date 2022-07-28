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
if(nmemb==0 ||size==0)
{
return NULL;
}
d=malloc(sizeof(char *)*nmemb);
if(d==NULL)
{
return NULL;
}
for(i=0;i<nmemb;i++)
{
d[i]=malloc(sizeof(char)*size);
if(d==NULL)
{
return NULL;
}
}
return d;
}
