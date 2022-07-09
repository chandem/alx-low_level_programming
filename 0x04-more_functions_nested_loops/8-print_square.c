#include"main.h"
/**

*print_square -is function that prints diagonal line
*@n: is input parameter 
*/
void print_square(int size)
{
if(size<=0)
{
_putchar('\n');
}
else 
{
int j;
for(j=0;j<size;j++)
{
int i;
for(i=0;i<size;i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
