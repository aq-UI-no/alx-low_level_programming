#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success (Always)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
