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
j=i;
while(i>0)
{
t[j-i]=t[i];
i--;
}
_putchar('\n');
}
