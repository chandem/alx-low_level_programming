#include"main.h"
/**
 *main - Entry point
 *
 *Return: return 0
 */

int print_sign(int);
int print_sign(int n){
if(n>0)
{
putchar ('+');
return 0;
}
else if(n==0)
{
putchar ('0');
return 0;
}
else
{
putchar ('-');
return -1;
}
}
