#include"main.h"
#include <stddef.h>
#include<stdlib.h>
/**
*_strdup -function that returns pointer.
*@str: input parameter.
*Return: char.
*/
char *_strdup(char *str)
{
char *d;
unsigned i;
unsigned int j;
for(i=0;*str!='\0';i++);
d=malloc(sizeof(char)*(i+1));
if(d==NULL)
{
return NULL;
}
else
{
for(j=0;j<i;j++)
{
d[j]=str[j];
}
return d;
}
}
