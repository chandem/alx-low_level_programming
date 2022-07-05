#include"main.h"
int print_last_digit(int r)
{
if(r>=0)
{
_putchar('0' + r%10);
return (r%10);
}
if(r<0)
{
_putchar('0' + (-1*r)%10);
return ((-1*r)%10);
}
}
