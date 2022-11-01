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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
