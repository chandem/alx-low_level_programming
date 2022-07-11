#include"main.h"
/**
*_strlen - returns the length of characters.
*s: is input parameter
*/
int _strlen(char *s)
{
    Char s[] = *s;
    int i;
    for (i = 0; s[i] != '\0'; ++i);
return i;
}
