#include<stdarg.h>
#include<stdio.h>
#include"variadic_function.h"
/**
*print_numbers -function that print numbers.
*@separator: input parameter.
*@n: input parameter.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list ptr;
    va_start(ptr, separator, n);
    
    for (i = 0; i < n; i++)
{
  va_arg(ptr,char*, unsigned int);
printf("%lu",n);
printf("%s", separator);
}
    va_end(ptr);
 
}
