#include"main.h"
#include<string.h>
/**
*_strcpy -copy string pointed by src to dest.
*@dest: is input parameter.
*@src: is input parameter.
*Return: char
*/
char *_strcpy(char *dest, char *src)
{
memcpy(dest,src,strlen(src)+1);
}
