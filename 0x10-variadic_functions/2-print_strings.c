include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
*print_strings -function that print numbers.
*@separator: input parameter.
*@n: input parameter.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *z;
    va_list ptr;
    va_start(ptr,n);
    for (i = 0; i < n; i++)
{
  z= va_arg(ptr, unsigned int);
if(z==NULL)
{
printf("%s","nil");
}
printf("%s",z);
if(separator==NULL)
{
continue;
}
if(i==n-1)
{
break;
}
printf("%s", separator);
}
    va_end(ptr);
printf("\n");
}
