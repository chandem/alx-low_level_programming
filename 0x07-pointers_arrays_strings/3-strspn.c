#include"main.h"
/**
*_strspn -function that return the first prefix string 
*@s: input parameter.
*@accept: input parameter.
*Return: unsigned int.
*/
unsigned int _strspn(char *s, char *accept)
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
return (z);
}
