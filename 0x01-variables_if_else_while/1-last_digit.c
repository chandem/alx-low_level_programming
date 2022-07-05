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
if(n%10>5){
printf("%s%d%s%d%s" , "Last digit of ",n," is ",n%10," and is greater than 5\n");
}
if(n%10==0){
printf("%s%d%s%d%s" , "Last digit of ",n," is ",n%10," and is 0\n"); 
}
if(n%10<6 && n%10!=0){
printf("%s%d%s%d%s" , "Last digit of ",n," is ",n%10," and is less than 6 and not 0\n"); 
}	
return (0);
}
