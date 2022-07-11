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
for(j=0;j<i;j++)
{
t[j]=t[i--];
}
}
