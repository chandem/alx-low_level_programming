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

    newNode = (list_t)malloc(sizeof(list_t));

    if(newNode == NULL)
    {
        return NULL;
    }
    else
    {
        newNode->data = data;
        newNode->next = head;

        head = newNode;          
}
