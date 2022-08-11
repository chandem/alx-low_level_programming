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
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
list_t *head=h;
head->Len=0;
while (head != NULL) 
{
    printf("%s", head->str);
    head = head->next;
head->Len++;
  }
return (head->len);
}
