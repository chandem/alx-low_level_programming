#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main(void)
{
int i;
for(i=0;i<=9;i++){
if (i==9)
{
break;
}
putchar(i + '0');     
putchar(',');
putchar(' ');
 }
putchar(9+'0');
    return 0;
}
