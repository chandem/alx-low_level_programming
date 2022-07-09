#include"main.h"
/**
*print_traingle -is function that prints triangle
*@size: is input parameter
*/
void print_triangle(int size)
{
if(size<=0)
{
_putchar('\n');
}
else
{
int j;
int i;
int z;
for(j=0;j<size;j++)
{
for(i=1;i<(size-j);i++)
{
_putchar(' ');
}
for(z=0;z<(j+1);z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
