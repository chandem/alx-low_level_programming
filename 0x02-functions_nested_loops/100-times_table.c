#include"main.h"
void print_times_table(int n);
{
if(n>=0 && n<=15)
{
int j;
for(j=0;j<=n;j++)
{
int i;
for(i=0;i<=n;i++)
{
int s=(i*j);
_putchar ((s / 10) + '0');
_putchar ((s % 10) + '0');
_putchar(',');
_putchar (' ');
}
_putchar ('\n');
}
}
}

