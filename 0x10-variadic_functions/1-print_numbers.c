#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;

	va_list my_list;

	va_start(my_list, n);

	for (counter = 0; counter < n; counter++)
{
	printf("%d", va_arg(my_list, unsigned int));
	if (counter != n - 1)
		printf("%s", separator);
	else
		printf("\n");
}
va_end(my_list);
}
