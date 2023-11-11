#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - searches for an integer
 *@size: the number of elements in an array
 *@cmp: pointer to function used to compare values
 *@array: the array
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (1);
}
}
		return (-1);
}

