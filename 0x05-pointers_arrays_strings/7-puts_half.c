#include"main.h"
/**
*puts_half -prints the string of given char. on stdout.
*@str: is input parameter.
*/
void puts_half(char *str)
{
char *t=str;
int i;
int j;
for(i=0;t[i]!='\0';i++);
for(j=i/2;j<i;j++)
{
_putchar(t[j]);
}
_putchar('\n');
}
