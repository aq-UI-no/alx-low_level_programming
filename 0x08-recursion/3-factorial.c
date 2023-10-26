#include "main.h"
/**
*factorial - finds the factorial of a value
*
*@n: the value
*Return: returns result
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
