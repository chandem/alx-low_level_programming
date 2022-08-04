#include<stdarg.h>
#include"variadic_functions.h" 
/**
*sum_them_all -function that sum for given numbers.
*@n: input parameter.
*Return: int
*/
int sum_them_all(const unsigned int n, ...)
{


    unsigned int sum = 0;
    unsigned int i;

    va_list ptr;

    va_start(ptr, n);
    
    for (i = 0; i < n; i++)
{
        Sum += va_arg(ptr, unsigned int);
}
    va_end(ptr);
 
    return (int)sum;
}
