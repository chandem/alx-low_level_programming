#include"main.h"
/**
*_strpbrk -function that return the first prefix string 
*@s: input parameter.
*@accept: input parameter.
*Return: (char*)s.
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int z;
int k;
for(i=0;accept[i]!='\0';i++);
for(k=0;s[k]!='\0';k+i-1)
{
z=0;
for(j=0;j<i;j++)
{
if(accept[j]==s[k+j])
{
z++;
}
if(z==i-1) 
{
return s;
}
}
}
return 0;
}
