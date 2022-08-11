#include"lists.h"
#include<stdio.h>
#include<string.h>
#include<lists.h>
#include<stdlib.h>
/**
*print_list -function that print list.
*@h: input parameter.
*Return: size_t.
*/
size_t print_list(const list_t *h)
{
list_t *head=h;
head->Len=0;
if(head->str==NULL)
{
printf("%s","[0] (nil)");
}
while (head != NULL) 
{
    printf("[%d] %s", head->len,head->str);
    head = head->next;
head->Len++;
  }
return (head->len);
}
