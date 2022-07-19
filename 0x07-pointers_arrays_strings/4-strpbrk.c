#include"main.h"
/**
*_strpbrk -function that return the first prefix string 
*@s: input parameter.
*@accept: input parameter.
*Return: (char)s.
*/
char *_strpbrk(char *s, char *accept)
{

int k;
while(*s!='\0')
{
k=0;
while(accept[k]!='\0')
{
if(*s==accept[k])
{
return s;
}
k++;
}
s++;
}
return 0;
}
