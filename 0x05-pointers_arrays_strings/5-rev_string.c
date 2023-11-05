#include "main.h"
/**
* rev_string-reversese a string
* @s: the string to be printed
*
*/
void rev_string(char *s)
{
int len, i;
char *start, *end, temp;

len = _strlen(s);
start = s;
end = s;

for (i = 0; i < len - 1; i++)
end++;

for (i = 0; i < len / 2; i++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
/**
* _strlen - the lenth of the string
*@ptr: the pointer character
*
* Return: the value of i if successful
*
*/
int _strlen(char *ptr)
{
int i;

i = 0;

while (*(ptr + 1) != '\0')
i++;
return (i);
}
