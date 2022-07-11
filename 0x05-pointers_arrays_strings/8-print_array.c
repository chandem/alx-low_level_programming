#include"main.h"
/**
*print_array -prints the array  of given number
*@str: is input parameter.
*/
void print_array(int *a, int n)
{
int i;
for(i=0;i<n;i++){
printf("%d",a[i]);
_putchar(',');
_putchar(' ');
}
}
