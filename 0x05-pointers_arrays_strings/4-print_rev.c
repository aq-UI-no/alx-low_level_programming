#include "main.h"
/**
*print_rev - prints string in revers
*@s: character to be printed
*/
void print_rev(char *s)
{
int len, i;
char *start, *end, temp;

len = _strlen(s);
start = s;
end = s;

for (i = 0; (i < len - 1); i++)
end++;

end--;

for (i = 0; (i < len / 2); i++)
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
* _strlen - length of the string
*@ptr: pointer
* Return: i
*/
int _strlen(char *ptr)
{
int i = 0;

while (*ptr != '\0')
{
i++;
ptr++;
}
return (i);
}
