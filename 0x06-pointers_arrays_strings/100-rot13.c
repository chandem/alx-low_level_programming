#include"main.h"
/**
*rot13 -The function encodes to rot13.
*@s: it is input parameter.
*/ 
char *rot13(char *s)
{
int i;
i=0;
while (s[i] != '\0')
 {
      s[i] = s[i]+13; 
      i++;
   }
   return (char*)s;
}
