#include"main.h"
/**
*puts2 -prints the string of given char. on stdout.
*@str: is input parameter.
*/
void puts2(char *str)
{
char *t=str;
int i;
for(i=0;t[i]!='\0';i++);
int j;
for(j=0;j<i;j++)
{
_putchar(t[j]);
}
_putchar('\n');
}
