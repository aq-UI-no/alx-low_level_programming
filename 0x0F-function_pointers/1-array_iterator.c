#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - executes a function given as parameter
 *@size: size of array
 *@action: pointer to function to be used
 *@array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;

for (i = 0; i < size; i++)

action(array[i]);
}
