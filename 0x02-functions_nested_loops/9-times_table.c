#include"main.h"
void times_table(void)
{
int s;
int j;
for(j=0;j<=9;j++)
{
int i;
for(i=0;i<=9;i++)
{
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
if (i < 9)
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((s / 10) + '0');
_putchar ((s % 10) + '0');
if (i < 9)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
