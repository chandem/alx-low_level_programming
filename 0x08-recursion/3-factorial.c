#include"main.h"
/**
*factorial -function that return factorial.
*@n: input parameter.
*Return: int
*/
int factorial(int n)
{
if(n<=1)
{  
return 1;
}
else
{
return n*factorial(n-1);
}
}
