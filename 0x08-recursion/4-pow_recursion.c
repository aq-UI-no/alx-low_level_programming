#include "main.h"
/**
*_pow_recursion - returns the value of x raised to power y
*
* @x: the value to be returned
* @y: the value to be raised
* Return:the result
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /*error */
}
{
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
}
