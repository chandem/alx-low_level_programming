#include"main.h"
/**
*leet -The function encodes to 1337
*@s: it is input parameter.
*Return: (char*)s
*/ 
char *leet(char *s)
{
while (s[i] != '\0') {
      s[i] = s[i] - 30; 
      i++;
   }
   return (char*)s;
}
}
