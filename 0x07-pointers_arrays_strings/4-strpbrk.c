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
int k;
i=0;
while(accept[i]!='\0')
{
k=0;
while(s[k]!='\0')
{
if(accept[i]==s[k])
{
return s;
}
k++;
}
i++
}
return 0;
}
