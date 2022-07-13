#include"main.h"
/**
*_strncmp -The function concatenate string s.
*@s1: it is input parameter 
*@s2: it is input parameter 
*Return: int.
*/ 
int _strcmp(char *s1, char *s2)
{
int i;
int j;
int z;
int a=0;
for(j=0;s1[j]!='\0';j++);
for(i=0;s2[i]!='\0';i++);
if(j==i)
{
for(z=0;s1[z]!='\0';z++)
{
if(s1[z]==s2[z])
a++;
}
if(a==j)
{
return 0;
}
else
{
return s1;
return s2;
}
}
else
{
return s1;
return s2;
}

}
