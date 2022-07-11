#include"main.h"
/**
*print_string -prints the string of given char. on stdout.
*@s: is input parameter.
*/
void rev_string(char *s)
{
char *t=s;
int i;
int j;
for(i=0;t[i]!='\0';i++);
i=i-1;
for(j=i;j>=0;j--)
{
t[i-j]=t[i];
}
_putchar('\n');
}
