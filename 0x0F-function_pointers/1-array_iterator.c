#include"function_pointers.h"
/**
*array_iterator -function that print array
*@array: input parameter.
*@size: input parameter.
*@action: input parameter.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
  size_t i;
    for(i=0;i<size;i++)
       action(array[i]);

}
