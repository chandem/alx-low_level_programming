#include"main.h"
/**
*reverse_array -The function reverse the item of given array.
*@a: it is input parameter.
*@n: it is input parameter.
*/ 
void reverse_array(int *a, int n)
{
char p[n];
int i;
j=-1;
for(i=n;i>0;i--)
{
j++;
p[j]=a[i];
}
return p;
}
