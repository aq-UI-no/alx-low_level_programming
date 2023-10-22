#include <stdio.h>
/**
* main - entry point
*
* Return: 0 always, success
*/

int main(void)
{
int a;
int b;
int tens_a;
int ones_a;
int tens_b;
int ones_b;

for (a = 0; a <= 98; a++)
{
for (b = a; b <= 99; b++)
{
tens_a = a / 10;
ones_a = a % 10;
tens_b = b / 10;
ones_b = b % 10;

putchar('0' + tens_a);
putchar('0' + ones_a);
putchar(' ');
putchar('0' + tens_b);
putchar('0' + ones_b);

if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
