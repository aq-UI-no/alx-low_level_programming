#include "main.h"
/**
* find_sqrt - Recursive function to find the square root using a guess.
* @n: The input number.
* @guess: The current guess for the square root.
*
* Return: The natural square root of 'n' or -1 if no natural square root exists.
*/
int find_sqrt(int n, int guess)

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The input number.
*
* Return: The natural square root of 'n' or -1 if no natural square root exists.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (find_sqrt(n, 1));
}
}

int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (find_sqrt(n, guess + 1));
}
}
