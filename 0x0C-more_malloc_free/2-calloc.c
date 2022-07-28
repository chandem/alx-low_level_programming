#include"main.h"
#include<stdlib.h>
/**
*_calloc -function that allocates memory for array.
*@nmemb: input parameter.
*@size: input parameter.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *d;
d=malloc(size);
return d;
}
