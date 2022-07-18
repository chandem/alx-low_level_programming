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
int j;
for(i=0;s[i]!='\0';i++);
i=i-1;
for(j=0;j<i;j++)
{
if(s[j]==c)
{
return (char*)s;
}
else
{
return NULL;
}
}
}
