#include"function_pointers.h"
/**
*print_name -function that print name
*@name: input parameter.
*@f: input parameter.
*/
void print_name(char *name, void (*f)(char *))
{
   if (name && f)
             f(name);
}
