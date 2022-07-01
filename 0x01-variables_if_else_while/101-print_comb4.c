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
for(y=x+1;y<10;y++)
{
int z;
for(z=y+1;z<10;z++)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
putchar (',');
putchar (' ');
}
}
}   
return 0;
}
