#include"main.h"
/**
*_strncpy -The function copy string from source to destination..
*@dest: it is destination parameter where the string appended
*@src: it is  source parameter where the string copied.
*@n: it is input parameter.
*Return: char(dest).
*/ 
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j<n && src[j]!='\0'; j++)
  {
     dest[j] = src[j];
  }
return (char*)dest;
}
