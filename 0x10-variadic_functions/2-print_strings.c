#include<stdarg.h>
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
  z= va_arg(ptr, char *);
if(z==NULL)
{
printf("%s","nil");
}
else
{
printf("%s",z);
}
if(i!=n-1 && separator!=NULL)
{
printf("%s", separator);
}
}
    va_end(ptr);
printf("\n");
}
