#include"main.h"
/**
*is_palindrome -function that check whether the string is palindrome or not.
*@s: input parameter.
*Return: int 
*/
int is_palindrome(char *s)
{
if(is_palindrome(s+1)==is_palindrome(s-1))
{
return 1;
}
else
{
return 0;
}
}
