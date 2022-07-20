#include"main.h"
/**
*factorial -function that return factorial.
*@n: input parameter.
*Return: int
*/
int factorial(int n)
{
if(n<0)
{  
return -1;
}
elseif(n==0)
 { 
return 1;
}
else
{
return n*factorial(n-1);
}
}
