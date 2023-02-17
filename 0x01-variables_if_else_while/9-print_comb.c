#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'The last digit'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 0;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar((ch % 10) + '0');
		if (ch == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
