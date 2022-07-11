#include"main.h"
/**
*print_rev -prints the string of given char. on stdout.
*@s: is input parameter.
*/
void print_rev(char *s)
{
char *t=s;
int i;
for(i=0;t[i]!='\0';i++);
i=i-1;
while(i>=0)
{
_putchar(t[i]);
--i;
}
_putchar('\n');
}
