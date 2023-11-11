#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: constant unsigned int
 *
 * Return: The sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, j;

if (n == 0)
	return (0);

va_start(ap, n);

j = 0;
{
for (i = 0; i < n; i++)
{
j += va_arg(ap, unsigned int);
}
va_end(ap);
return (j);
}
}
