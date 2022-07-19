#include"main.h"
/**
*_strpbrk -function that return the first prefix string 
*@s: input parameter.
*@accept: input parameter.
*Return: (char*)s.
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
unsigned int j;
unsigned int z=0;
for(i=0;accept[i]!='\0';i++);
for(j=0;j<i;j++)
{
if(accept[j]==s[j])
{
z++;
}
}
if(z==j) 
{
return s;
}
else
}
return 0;
}
}
