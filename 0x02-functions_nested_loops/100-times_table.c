#include"main.h"
void print_times_table(int n)
{
int j;
for(j=0;j<=n;j++)
{
int i;
for(i=0;i<=n;i++)
{
int s;
s=i*j;
if ((s / 10) == 0)
{
if (i == 0)
{
_putchar ('0');
}
if (i!= 0)
{
_putchar (' ');
_putchar ((s % 10) + '0');
}
else
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((s / 10) + '0');
_putchar ((s % 10) + '0');
if (i=n)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}


