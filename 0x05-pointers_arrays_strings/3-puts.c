#include"main.h"
/**
*_puts -prints the string of given char. on stdout.
*@str: is input parameter.
*/
void _puts(char *str)
{
char *t=str;
int i;
for(i=0;t[i]!='\0';i++)
{
putchar(t[i]);
}
}
