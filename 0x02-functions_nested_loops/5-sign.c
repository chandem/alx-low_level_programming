#include"main.h"
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main (void)
{

}

int print_sign(int n){
if(n>0)
putchar ('+');
return 0;
else if(n==0)
putchar ('0');
return 0;
else if (n<0)
putchar ('-');
return -1;
}
