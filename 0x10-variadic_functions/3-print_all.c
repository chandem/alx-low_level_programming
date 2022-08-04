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
char c;
float d;
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
else if (*format == 'c') 
{
             c = va_arg(args, char);
            printf("%c\n", c);
        } 
else if (*format == 'f')
 {
             d = va_arg(args,float);
            printf("%f\n", d);
        }
else if (*format == 's')
{
h = va_arg(args, char *);
            printf("%s\n", h);
}
        ++fmt;
    }
 
    va_end(args);
}
 
