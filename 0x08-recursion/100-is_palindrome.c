#include"main.h"
/**
*is_palindrome -function that check whether the string is palindrome or not.
*@s: input parameter.
*Return: int 
*/
int is_palindrome(char *s)
{
if(*s!='\0')
{
if(_puts_recursion(s)==_print_rev_recursion(s))
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
return 1;
}
}
