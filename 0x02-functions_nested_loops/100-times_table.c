#include"main.h"
void print_times_table(int n)
{
int i;
int j;
int s=i*j;
if(n>=0 && n<=15)
{

for(j=0;j<=n;j++)
{
for(i=0;i<=n;i++)
{

_putchar ((s / 10) + '0');
_putchar ((s % 10) + '0');
_putchar(',');
_putchar (' ');
}
_putchar ('\n');
}
}
}

