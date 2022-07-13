#include"main.h"
/**
*_strcat -The function concatenate string s.
*@dest: it is destination parameter where the string appended
*@src: it is  source parameter where the string copied.
*Return: char(dest).
*/ 
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i]!='\0'; i++);
  
  for (j = 0; src[j]!='\0'; j++; i++)
  {
     dest[i] = src[j];
  }
  dest[i] = '\0';
return dest;
  
}
