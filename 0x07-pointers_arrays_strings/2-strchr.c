#include"main.h"
/**
*_strchr -function that find char.in a given string.
*@s: input parameter.
*@c: input parameter.
*Return: (char)s.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return 0;
}
