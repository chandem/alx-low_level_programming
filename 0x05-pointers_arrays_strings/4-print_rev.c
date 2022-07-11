#include"main.h"
/**
*print_rev -prints the string of given char. on stdout.
*@s: is input parameter.
*/
void print_rev(char *s)
{
char *t=s;
int i;
for(i=sizeof(t);t[i]!='\0';i--)
{
_putchar(t[i]);
}
_putchar('\n');
}
