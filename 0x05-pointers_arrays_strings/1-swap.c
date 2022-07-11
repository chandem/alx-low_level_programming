#include"main.h"
/**
*swap_int -swaps the value of two integers.
*@a: input parameter
*@b: input parameter
*/
void swap_int(int *a, int *b)
{

int temp=*b;
*b=*a;
*a=temp;
}
