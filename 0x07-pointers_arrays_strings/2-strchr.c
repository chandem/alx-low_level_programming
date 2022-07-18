#include"main.h"
/**
*_strchr -function that find char.in a given string.
*@s: input parameter.
*@c: input parameter.
*Return: (char)s.
*/
char *_strchr(char *s, char c)
{
int i;
for(i=0;s[i]!='\0';i++)
{
if(s[i]==c)
{
return (char*)s;
}
else
{
return NULL;
}
}
}
