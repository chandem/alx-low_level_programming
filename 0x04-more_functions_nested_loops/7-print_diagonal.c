#include"main.h"
/**
*@n is input parameter
*@print_diagonal is function that prints diagonal line 
*/
void print_diagonal(int n)
{
if(n<=0)
{
_putchar('\n');
}
else 
{
int i;
for(i=0;i<n;i++)
{
_putchar('\\');
_putchar('\n');
if(i==0)
{
putchar(' ');
}
for(int j=0;j<i;j++)
{
_putchar(' ');
}
}
_putchar('\n');
}
}



