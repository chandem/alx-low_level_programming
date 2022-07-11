#include"main.h"
/**
*puts_half -prints the string of given char. on stdout.
*@str: is input parameter.
*/
void puts_half(char *str)
{
char *t=str;
int i;
for(i=0;t[i]!='\0';i++);
i=i-1;
i=i/2;
while(i>=0)
{
_putchar(t[i]);
i++;
}
_putchar('\n');
}
