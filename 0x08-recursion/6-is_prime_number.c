#include"main.h"
/**
*is_prime_number -function that check prime numbers.
*@n: input parameter.
*Return: int
*/
int is_prime_number(int n)
{
if(n%2==1 && n!=1)
{
return 1;
}
else
{  
return 0;
}
}
