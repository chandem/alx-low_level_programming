#include"main h"
void times_table(void)
{
int j;
for(j=0;j<=8;j++)
{
int i;
for(i=0;i<=9;i++)
{
_putchar('0' + (i*j));
}
_putchar('\n');
}
}
