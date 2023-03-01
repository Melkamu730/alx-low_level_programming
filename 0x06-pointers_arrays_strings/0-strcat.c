#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to have content added from str
 *
 * @src: string to be read
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *d;
	char *s;

	d = dest;
	s = src;

	while (*dest)
	{
		dest++;
	}
/*
 * tracer
 *	printf("*dest=%c, dest=%p\n", *dest, dest);
 */
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
/*
 * tracers
 *		printf("*src=%c, src=%p", *src, src);
 *		printf("*dest=%c dest=%p\n", *dest, dest);
 */
	}
	dest++;
	*dest = '\0';
	dest = d;
	src = s;

	return (dest);
}
