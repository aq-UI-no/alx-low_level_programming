#include "main.h"
/**
 * print_number - Prints a number as characters
 * @n: The number to be printed
 */
void print_number(int n)
{
if (n > 9)
{
_putchar(n / 10 + '0');
n = n % 10;
}
else
{
_putchar(n + '0');
}
}
/**
 * more_numbers - prints 10 times the numbers
 *
 */
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
print_number(i);
}
_putchar('\n');
}
}
