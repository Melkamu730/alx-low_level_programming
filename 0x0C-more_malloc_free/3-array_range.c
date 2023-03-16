#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: the min size of the memory to print
 * @max: the max size of the memory to print
 * Return: min or max
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, x, total;

	if (min > max)
	return (NULL);

	total = max - min;

	ar = malloc((total + 1) * sizeof(int));

	if (ar == NULL)
	return (NULL);

	for (i = 0, x = min; x <= max; x++, i++)
	ar[i] = x;
	return (ar);
}
