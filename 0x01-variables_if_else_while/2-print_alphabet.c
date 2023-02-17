#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 **
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch, a, b;

	ch = 0;
	for (ch = 1; ch < 100; ch++)
	{
		a = ch / 10;
		b = ch % 10;

		if (a > b || b == a)
		{
			continue;
		}

		putchar((a) + '0');
		putchar((b) + '0');
		if (ch == 89)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
