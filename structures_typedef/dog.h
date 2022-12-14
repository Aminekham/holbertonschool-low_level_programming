#ifndef DOG
#define DOG
/**
 *struct dog - a structure defining the features of a dog
 * @name: -name of the dog
 *
 * @age: -the age of our dog
 *
 * @owner: -the name of its owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
