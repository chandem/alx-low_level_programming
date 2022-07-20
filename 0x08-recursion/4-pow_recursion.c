#include"main.h"
/**
*_pow_recursion -function that print power of two numbers.
*@x: input parameter.
*@y: input parameter.
*Return: int 
*/
int _pow_recursion(int x, int y)
{
if(y<0)
{
return -1;
}
else if(y==1)
{
return x;
}
else if(y==0)
{
return 1;
}
else
{
return (x*(_pow_recursion(x,(y-1))));
}
}
