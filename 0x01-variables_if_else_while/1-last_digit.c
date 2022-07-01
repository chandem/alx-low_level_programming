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
if(n>5){
printf("%d%s" , "Last digit of ",n," is ",n," and is greater than 5\n");
}
if(n==0){
printf("%d%s" , "Last digit of ",n," is ",n," and is zero\n"); 
}
if(n<6 && n!=0){
printf("%d%s" , "Last digit of ",n," is ",n," and is less than 6 and not 0\n"); 
}	
return (0);
}
