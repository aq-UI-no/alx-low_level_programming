#include "main.h"
/**
 *is_prime_number -  finds the prime numbers
 *
 *@n: the prime number
 *Return: 0 if not a prime number, 1 if it is a prime number
 */
int is_prime_number(int n)
{
	int i;

	if ( n <= 1)
	{
return (0);
	}

if (i == 2)
{
	return (1);
}
if ( n % i == 0)
		{
		return (0);
		}
		return (n, i - 1);
		}
