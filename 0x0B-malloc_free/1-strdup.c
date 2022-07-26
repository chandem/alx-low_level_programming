#include"main.h"
#include <stddef.h>
#include<stdlib.h>
/**
*_strdup -function that returns pointer.
*@str: input parameter.
*/
char *_strdup(char *str)
{
char *d;
unsigned i;
for(i=0;*str!='\0';i++);
d=malloc(i);
if(*d=='\0')
{
return NULL;
}
else
{
return d;
}
}
