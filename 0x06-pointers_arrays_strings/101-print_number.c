#include"main.h"
/**
*print_number -The function that print integer numbers.
*@n: it is input parameter.
*/ 
void print_number(int n)
{
if(n>=-2147483647 && n<=2147483647)
{
if(n<0)
{
_putchar('-');
}
if(n<0)
{
n=(n*-1);
}
if(n>=1000000000)
{
_putchar(n/1000000000 + '0');
}
if(n>=100000000)
{
_putchar(n/100000000 + '0');
}
if(n>=10000000)
{
_putchar(n/10000000 + '0');
}
if(n>=1000000)
{
_putchar(n/1000000 + '0');
}
if(n>=100000)
{
_putchar(n/100000 + '0');
}
if(n>=10000)
{
_putchar(n/10000 + '0');
}
if(n>=1000)
{
_putchar(n/1000 + '0');
}
if(n>=100)
{
_putchar(n/100 + '0');
}
if(n>=10)
{
_putchar(n/10 + '0');
}
_putchar(n%10 + '0');
}
}
