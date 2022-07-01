#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
for(x=0;x<=9;x++)
{
int y;
for(y=x+1;y<=9;y++)
{
int z;
for(z=y+1;z<=9;z++)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if((x==8)&&(y==8)&&(z==9))
{
break;
}
putchar (',');
putchar (' ');
}
}
} 
putchar ('\n');  
return 0;
}
