#include"main.h"
/**
*@size is input parameter
*@print_traingle is function that prints triangle
*/
void print_triangle(int size)
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
for(z=0;z<j+1;z++)
{
_putchar('#');
}
_putchar('\n');
}
}
