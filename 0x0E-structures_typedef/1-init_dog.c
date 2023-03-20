#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: Name of the variable to be initialized
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: the variable initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
