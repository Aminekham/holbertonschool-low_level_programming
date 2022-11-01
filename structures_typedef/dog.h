#ifndef DOG
#define DOG
/**
 *struct dog - a structure defining the features of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * @name: -name of the dog
 * 
 * @age: -the age of our dog
 * 
 * @owner: -the name of its owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
