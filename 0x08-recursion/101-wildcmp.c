#include"main.h"
/**
*wildcmp -function that compare two strings.
*@s1: input parameter.
*@s2: input parameter.
*Return: int
*/
int wildcmp(char *s1, char *s2)
{
if(*s1!='\0' && *s2!='\0')
{
if(wildcmp((s1+1),s2)==wildcmp(s1,(s2+1)))
{
return 1;
}
else
{ 
return 0;
}
}
else
{
return 0;
}
}
