#include"main.h"
/**
*print_line -is function that prints line
*@n is input parameter 
*/
void print_line(int n)
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
_putchar('_');
}
_putchar('\n');
}
}
