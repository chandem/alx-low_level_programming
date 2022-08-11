#include"lists.h"
/**
*list_len -function that print list.
*@h: input parameter.
*Return: size_t.
*/
size_t list_len(const list_t *h)
{
size_t r;
r=0;
while (h != NULL) 
{
printf("%d",h->Len);
h=h->next;
r++;
}
return r;
}
