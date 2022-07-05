#include"main.h"
void times_table(void)
{
int j;
for(j=0;j<=9;j++)
{
int i;
for(i=0;i<=8;i++)
{
_putchar('0' + (i*j));
}
_putchar('\n');
}
}
