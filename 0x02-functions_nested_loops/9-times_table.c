#include"main.h"
void times_table(void)
{
int s;
int j;
for(j=0;j<=9;j++)
{
int i;
for(i=0;i<=8;i++)
{
s=i*j;
_putchar('0' + s/10);
_putchar('0' + s%10);
}
_putchar('\n');
}
}
