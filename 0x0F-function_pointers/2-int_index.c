#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: the pointer to the array
 *  @size: the size of the array
 *  @cmp: a pointer to the function to be used to compare values
 *
 *  Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
