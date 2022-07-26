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
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{		
s2 = "";
}
for(i=0;s1[i]!='\0';i++);
for(j=0;s2[j]!='\0';j++);
f=(char *)malloc(sizeof(char)*(i+j+1));
if(f==NULL)
{
return NULL;
}
for(k=0;k<i;k++)
{
f[k]=s1[i];
}
for(z=0;z<=j;z++)
{
f[k+z+1]=s2[z];
}
return (f);
}
