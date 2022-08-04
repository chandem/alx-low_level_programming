#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
*print_all -function that print s all 
*@format: input parameter.
*/

void print_all(const char * const format, ...)
{
int i;
char *h;
va_list args;
    va_start(args, format);
 
    while (*format != '\0')
 {
        if (*format == 'd') 
{
             i = va_arg(args, int);
            printf("%d\n", i);
        } 

        ++fmt;
    }
 
    va_end(args);
}
 
