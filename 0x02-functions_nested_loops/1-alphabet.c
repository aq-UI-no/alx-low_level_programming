#include "main.h"
/**
 * print_alphabet - prints the letters of the alphabet in lowercase
 */
void print_alphabet(void)
{
	char(letter);

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
