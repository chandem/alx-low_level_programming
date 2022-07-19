#include"main.h"
/**
*_strpbrk -function that return the first prefix string 
*@s: input parameter.
*@accept: input parameter.
*Return: (char)s.
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int z;
int k;
for(i=0;accept[i]!='\0';i++);
k=0;
while (s[k]!='\0')
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
return (char*)s;
}
}
k+i;
}
return 0;
}
