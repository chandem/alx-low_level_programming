#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main()
{
int x;
for(x=0;x<100;x++)
{
int y;
for(y=x+1;y<100;y++)
 {
   putchar(x + '0');
   putchar(x + '0');

   putchar(' ');

   putchar(x + '0');
   putchar(y + '0');
   
     
   
     
   putchar(',');
   putchar(' ');
 }
} 
putchar('\n');  
return 0;
}
