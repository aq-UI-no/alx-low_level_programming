#include "main.h"
#include <stdio.h>
/**
 * print_array - the integer
 *@a: pointer
 *@n: value of space
 */
void print_array(int *a, int n)
{
for (n = 0; n < 4; n++)
	printf("%d, ", *(a + n));
printf("%d\n", *(a + n));
}
