#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
for(x=0;x<10;x++)
{
int y;
for(y=0;y<9;y++)
{
putchar(x + '0');
putchar(x + '0');
putchar(' ');
putchar(x + '0');
putchar((y+1)+ '0');
putchar (',');
putchar (' ');
}
}   
return 0;
}
