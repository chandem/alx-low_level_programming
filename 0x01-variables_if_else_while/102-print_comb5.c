#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
for(x=0;x<=99;x++)
{
int y;
for(y=0;y<=99;y++)
{
putchar(x + '0');
putchar(x + '0');
putchar(' ');
putchar(x + '0');
putchar(y + '0');
if((x==98)&&(y==99))
{
break;
}
putchar(',');
putchar(' ');
}
} 
putchar('\n');  
return 0;
}
