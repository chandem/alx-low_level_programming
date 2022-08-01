typedef struct dog dog_t;

/**
*struct dog -is structure for dog type.
*@name: input parameter
*@age: input parameter.
*@owner: input parameter.
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
