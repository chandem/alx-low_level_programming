#include"main.h"
int print_last_digit(int r)
{
int d;
if(r>=0)
{
d=r%10;
_putchar('0' + d);
return (d);
}
if(r<0)
{
d=-1*(r%10);
_putchar('0' + d);
return (d);
}
}
