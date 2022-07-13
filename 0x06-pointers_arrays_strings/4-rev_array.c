#include"main.h"
/**
*reverse_array -The function reverse the item of given array.
*@a: it is input parameter.
*@n: it is input parameter.
*/ 
void reverse_array(int *a, int n)
{
int p[n];
int i=n-1;
int j=-1;
while(i>=0)
{
j++;
p[j]=a[i];
i--;
}
return p;
}
