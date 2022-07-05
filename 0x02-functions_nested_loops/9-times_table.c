#include"main.h"
void times_table(void)
{
int s;
int j;
for(j=1;j<=9;j++)
{
int i;
for(i=0;i<=9;i++)
{
s=i*j;
_putchar('0' + s/10);
_putchar('0' + s%10);
_putchar(',');
}
_putchar('\n');
}
}
