#include"main.h"
/**
*_puts_recursion -function that print char. 
*@s: input parameter.
*/
void _puts_recursion(char *s)
{ 
_putchar(*s);
s++;
if(*s!='\0')
{
_puts_recursion(s);
}
if(*s=='\0')
{
_putchar('\n');
}
}
