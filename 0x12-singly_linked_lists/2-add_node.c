#include"lists.h"
/**
*add_node -function that add node at beginning.
*@head: input parameter.
*@str: input parameter.
*Return: list_t.
*/
list_t *add_node(list_t **head, const char *str)
{

    newNode = (struct node*)malloc(sizeof(struct node));

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
