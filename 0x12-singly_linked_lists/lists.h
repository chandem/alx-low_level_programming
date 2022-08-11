#ifndef _LISTS_
#define _LISTS_

#include<stdio.h>
#include<string.h>
#include<lists.h>
#include<stdlib.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
