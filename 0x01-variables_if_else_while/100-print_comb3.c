#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
for(x=0;x<=9;x++){
int y;
for(y=x+1;y<=9;y++)
{
putchar(x + '0');
putchar(y + '0');
if (x==9 && y==9)
{
break;
}
putchar (',');
putchar (' ');
}
}   
return 0;
}


                  
