#include"lists.h"
/**
*print_list -function that print list.
*@h: input parameter.
*Return: size_t.
*/
size_t print_list(const list_t *h)
{
list_t *head=h;
size_t r;
r=0;
if(head->str==NULL)
{
printf("[%d] %s",0 "(nil)");
}
else
{
while (head != NULL) 
{
    printf("[%d] %s", head->len,head->str);
    head = head->next;
r++;
  }
}
return r;
}
