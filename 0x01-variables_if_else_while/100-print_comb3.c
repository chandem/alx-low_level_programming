#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
for(x=0;x<10;x++){
int y;
for(y=x+1;y<10;y++)
{
putchar(x + '0');
putchar(y + '0');
if (x==10 && y==10)
{
break;
}
putchar (',');
putchar (' ');
}
}   
return 0;
}


                  
