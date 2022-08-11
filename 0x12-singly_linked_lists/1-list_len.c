#include"lists.h"
/**
*print_list -function that print list.
*@h: input parameter.
*Return: size_t.
*/
size_t print_list(const list_t *h)
{
size_t r;
r=0;
while (h != NULL) 
{
r++;
}
return r;
}
