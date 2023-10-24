#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - Find and return the largest prime factor
* of a given number.
* @n: The number to find the largest prime factor for.
*
* Return: The largest prime factor of the number.
*/
long largest_prime_factor(long n)
{
long factor = 2;

while (n > 1)
{
if (n % factor == 0)
{
n /= factor;
}
else
{
factor++;
}
}

return (factor);
}
/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
long number = 612852475143;
long largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);
return (0);
}
