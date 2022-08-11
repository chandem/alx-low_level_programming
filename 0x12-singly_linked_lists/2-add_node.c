#include"lists.h"
/**
*add_node -function that add node at beginning.
*@head: input parameter.
*@str: input parameter.
*Return: list_t.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode
size_t d;

    newnode =(list_t)malloc(sizeof(list_t));

    if(newnode == NULL)
    {
        return NULL;
    }

	newnode->str = strdup(str);

	for (d = 0; str[d]; d++)
    else
    {
        newnode->len = len;
        newnode->next = *head;

        *head = newnode;  
}
return (*head);        
}
