#include <stdlib.h>
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: int
 * Return: pointer to the array
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
