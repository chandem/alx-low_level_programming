#include"main.h"
/**
*is_palindrome -function that check whether the string is palindrome or not.
*@s: input parameter.
*Return: int 
*/
int is_palindrome(char *s)
{
char r=*s;
if(*s!='\0')
{
is_palindrome(s+1);
{
char e=*s;
if(r==e)
}
return 1;
}
else
{
return 0;
}
}
else
{
return 1;
}
}
