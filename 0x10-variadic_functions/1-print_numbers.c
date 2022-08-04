#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
*print_numbers -function that print numbers.
*@separator: input parameter.
*@n: input parameter.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    unsigned int z;
    va_list ptr;
    va_start(ptr,n);
    
    for (i = 0; i < n; i++)
{
  z= va_arg(ptr, unsigned int);
printf("%u",z);
printf("%s", separator);
}
    va_end(ptr);
 
}
