#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
int y;
for(x=0;x<100;x++)
{
for(y=x+1;y<100;y++)
{
putchar(x/10 + '0');
putchar(x%10 + '0');

putchar(' ');

putchar(x/10 + '0');
putchar(y%10 + '0');
if((x==98) && (y==99))
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
