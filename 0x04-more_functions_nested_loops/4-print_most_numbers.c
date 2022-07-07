#include"main.h"
/**
*print_most_numbers is function that prints number from 0 to 9
*/
void print_most_numbers(void)
{
int i;
for(i=0;i<=9;i++)
{
if(i==2)
{
continue;
}
if(i==4)
{
continue;
}
_putchar(i + '0');
}
_putchar('\n');
}

