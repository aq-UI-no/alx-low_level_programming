#include "main.h"
/**
* _strlen - the starting length
* @s: first character
* Return: 0 always
*
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
