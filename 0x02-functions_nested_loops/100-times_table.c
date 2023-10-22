#include "main.h"
/**
* print_times_table - Prints a times table for the given number n.
* @n: The number for which to print the times table.
*/
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, result;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;

if (j == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');

if (result < 10)
{
_putchar(' ');
}
else if (result < 100)
{
_putchar(' ');
}

_putchar('0' + result / 100);
_putchar('0' + (result / 10) % 10);
}
_putchar('0' + result % 10);
}
_putchar('\n');
}
}
}
