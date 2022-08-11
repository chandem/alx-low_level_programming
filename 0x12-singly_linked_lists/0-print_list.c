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
if(h->str==NULL)
{
printf("[%d] %s\n",0, "(nil)");
}
else
{
    printf("[%d] %s\n", h->len,h->str);
    h = h->next;
r++;
  }
}
return r;
}
