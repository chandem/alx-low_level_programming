#include"main.h"
/**
*reverse_array -The function reverse the item of given array.
*@a: it is input parameter.
*@n: it is input parameter.
*/ 
void reverse_array(int *a, int n)
{
int s;
int i;
    for(i = 0; i<n/2; i++)
{
        s = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = s;
    }
}
