#include"main.h"
/**
*@more_numbers function that prints number from 0 to 9
*/
void more_numbers(void)
{
int j;
for(j=0;j<=9;j++)
{
int i;
for(i=0;i<14;i++)
{
if(i>=10)
{
_putchar(i/10 + '0');
_putchar(i%10 + '0');
}
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
}



