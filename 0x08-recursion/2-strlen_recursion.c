#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: the input string
*
* Return: the length of the string
*/
int _strlen_recursion(char *s)
{
int Int = 0;

if (*s)
{
Int++;
Int += _strlen_recursion(s + 1);
}
return (Int);
}
