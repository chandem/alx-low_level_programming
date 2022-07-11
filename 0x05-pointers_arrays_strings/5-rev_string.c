#include"main.h"
/**
*rev_string -prints the string of given char. on stdout.
*@s: is input parameter.
*/
void rev_string(char *s)
{
char *t=s;
char *m="";
int i;
int j;
int z;
int k;
for(i=0;t[i]!='\0';i++);
k=i;
for(j=0;j<i;j++)
{
m[j]=t[i--];
}
t=m;
for(z=0;z<k;z++)
{
_putchar(t[z]);
}
}
