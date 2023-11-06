#ifndef DOG_H
#define DOG_H

/**
 * struct dog - has 3 elements
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 *
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
