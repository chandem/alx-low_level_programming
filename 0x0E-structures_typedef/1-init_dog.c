#include"dog.h"
/**
*init_dog -is function that intialize struct dog.
*@d: input parameter.
*@name: input parameter
*@age: input parameter.
*@owner: input parameter.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
