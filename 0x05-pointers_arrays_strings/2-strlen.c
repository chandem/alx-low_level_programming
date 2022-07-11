#include"main.h"
/**
*_strlen - returns the length of characters.
*s: is input parameter
*/
int _strlen(char *s)
{
    char *t[] = *s;
    int i;
    for (i = 0; t[i] != '\0'; ++i);
return i;
}
