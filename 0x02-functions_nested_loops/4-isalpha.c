#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is an alphabetic letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{


if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);

}

if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
_putchar ('\n');
}
