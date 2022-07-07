#include"main.h"
void print_number(int n)
{
if(n>=-2,147,483,647 && n<=2,147,483,647)
{
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
