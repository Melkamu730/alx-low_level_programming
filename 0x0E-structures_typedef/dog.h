#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct for dogs
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
