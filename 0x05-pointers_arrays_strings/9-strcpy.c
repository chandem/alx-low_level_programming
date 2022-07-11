#include"main.h"
#include<string.h>
/**
*_strcpy -copy string pointed by src to dest.
*@dest: is input parameter.
*@src: is input parameter.
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{

int j;

j = 0;

while (src[j] != '\0')
{
dest[j] = src[j];
j++;
}
dest[j] = '\0';

return (dest);

}
}
