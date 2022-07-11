#include"main.h"
/**
*puts2 -prints the string of given char. on stdout.
*@str: is input parameter.
*/
void puts2(char *str)
{
int i;
int j;
char *t=str;
for(i=0;t[i]!='\0';i++);
for(j=0;j<i;j++)
{
if(j%2==0){
_putchar(t[j]);
}
}
_putchar('\n');
}
