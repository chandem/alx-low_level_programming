#include"main.h"
#include<stdio.h>
/**
*print_array -prints the array  of given number
*@a: is input parameter.
*@n: is input parameter.
*/
void print_array(int *a, int n)
{
int *t[n]=a;
int i;
for(i=0;i<n;i++)
{
printf("%d",t[i]);
_putchar(',');
_putchar(' ');
}
}
