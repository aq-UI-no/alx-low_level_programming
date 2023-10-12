#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the number whose last digit will be printed
*
* Return: the last digit of n
*/
int print_last_digit(int n)
{
int lastdigit;

	if (n < 0)
{
	n = -n;
}
else
if (n >= 0)
{
	n = n;
}
lastdigit = n % 10;

return (lastdigit);
}
