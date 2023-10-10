#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: Name
 * @age: Age
 * @owner: Owner
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
