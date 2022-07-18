#include"main.h"
/**
*_memset -The functions that set memory location.
*@b: input parameter.
*@s: input parameter.
*@n: input parameter.
*Return: (char*)s.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for(i=0;i<n;i++)
{
s[i]=b;
}
return (char*)s;
}
