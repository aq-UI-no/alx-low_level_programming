#include "main.h"
/**
 *swap_int- swaps the values of two integers
 *temp: temporarily holds the values
 *@a: first parameter
 *@b: second parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
