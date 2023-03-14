#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of char
 *
 * @size: This is the length of the array
 * @c: This is the input character
 *
 * Return: Initialized with the specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
