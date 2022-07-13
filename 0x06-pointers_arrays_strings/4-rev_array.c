#include"main.h"
/**
*reverse_array -The function reverse the item of given array.
*@a: it is input parameter.
*@n: it is input parameter.
*/ 
void reverse_array(int *a, int n)
{
int temp;
    for(int i = 0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}
