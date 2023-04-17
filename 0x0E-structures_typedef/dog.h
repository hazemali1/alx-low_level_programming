#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct
 *
 * @name: Parameter1
 * @age: Parameter2
 * @owner: Parameter3
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