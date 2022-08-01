#include"dog.h"
#include<stdlib.h>
/**
*print_dog -print struct dog.
*@d: input parameter.
*/
void print_dog(struct dog *d)
{
if(d.name==NULL && d.age==NULL && d.owner==NULL)
{
printf("%s","nil");
}
else if(d.name==NULL)
{
printf("Name:%s","nil");
}
else if(d==NULL)
{
printf();
}
else
{
printf("Name:%c",d.name);
printf("Age:%f",d.age);
printf("Owner:%c",d.owner);
}
}
