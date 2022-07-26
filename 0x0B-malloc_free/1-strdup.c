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
unsigned int i;
unsigned int j;
if(str==NULL)
{
return NULL;
}
else
{
for(i=0;str[i]!='\0';i++);
d=(char *)malloc(sizeof(char)*(i+1));
if(d==NULL)
{
return NULL;
}
for(j=0;j<=i;j++)
{
d[j]=str[j];
}
return (d);
}
}
