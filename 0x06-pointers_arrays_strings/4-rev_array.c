#include"main.h"
/**
*reverse_array -The function reverse the item of given array.
*@a: it is input parameter.
*@n: it is input parameter.
*/ 
void reverse_array(int *a, int n)
{
int p[n];
int i;
i= n-1;
int j; 
j=-1;
int z;
while(i>=0)
{
j++;
p[j]=a[i];
i--;
}
for(z=0;z<n;z++)
{
a[z]=p[z];
}
}
