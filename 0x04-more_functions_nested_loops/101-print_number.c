#include"main.h"
void print_number(int n)
{
if(n>=-2147483647 && n<=2147483647)
{
_putchar(n/1000000000 + '0');
_putchar(n/100000000 + '0')
_putchar(n/10000000 + '0');
_putchar(n/1000000 + '0');
_putchar(n/100000 + '0');
_putchar(n/10000 + '0');
_putchar(n/1000 + '0');
_putchar(n/100 + '0');
_putchar(n/10 + '0');
_putchar(n%10 + '0');
}

}
