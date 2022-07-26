#include"main.h"
#include <stddef.h>
#include<stdlib.h>
/**
*str_concat -function that concatenate two strings.
*@s1: input parameter.
*@s2: input parameter.
*Return: char 
*/
char *str_concat(char *s1, char *s2)
{
char *f;
unsigned int i;
unsigned int j;
unsigned int k;
unsigned int z;
for(i=0;*s1!='\0';i++);
for(j=0;*s2!='\0';j++);
f=(char)malloc((sizeof(char))*(i+j+1));
if(f==NULL)
{
return NULL;
}
else
{
for(k=0;k<i;k++)
{
f[k]=s1[i];
}
for(z=0;z<j;z++)
{
f[k+z]=s2[j];
}
return f;
}
}
