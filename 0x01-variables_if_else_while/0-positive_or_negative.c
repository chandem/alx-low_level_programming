#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: return 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0){
printf("%d%s" , n , " is positive\n");
}
if(n<0){
printf("%d%s" , n ," is negative\n");
}
if(n==0){
printf("%d%s" , n ," is zero\n");
}	
	return (0);
}
