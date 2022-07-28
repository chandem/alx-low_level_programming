#include"main.h"
#include<stdlib.h>
/**
*sting_nconcat -function that concatenate two strings.
*@s1: input parameter.
*@s2: input parameter.
*@n: input parameter.
*Return: char.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *d;
unsigned int i;
unsigned int j;
unsigned int k;
unsigned int z;
if(s1==NULL)
{
s1="";
}
if(s2==NULL)
{
s2="";
}
for(i=0;s1[i]!='\0';i++);
for(j=0;s2[j]!='\0';j++);
if(n>=j)
{
n=j;
d=(char *)malloc(i+n+1);
if(d==NULL)
{
return NULL;
}
for(k=0;k<i;k++)
{
d[k]=s1[k];
}
for(z=0;z<n;z++)
{
d[k+z+1]=s2[z];
}
d[k+1]='\0';
return d;
}
else
{
d=(char *)malloc(i+n+1);
if(d==NULL)
{
return NULL;
}
for(k=0;k<i;k++)
{
d[k]=s1[k];
}
for(z=0;z<n;z++)
{
d[k+z+1]=s2[z];
}
d[k+1]='\0';
return d;
}
}
