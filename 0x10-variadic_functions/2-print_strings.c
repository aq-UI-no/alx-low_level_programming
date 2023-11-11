#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - prints string followed by new line
*@n: number of strings passed to the function
*@separator: string to be printed between strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;

va_list my_list;

va_start(my_list, n);

for (counter = 0; counter < n; counter++)
{
char *airport;
airport = va_arg(my_list, char *);

if (airport == NULL || airport[0] == '\0')
	printf("nil");
else
printf("%s", airport);

if (counter != n - 1)
printf("%s", separator);
}
printf("\n");

va_end(my_list);
}
