#include <stdio.h>
/**
* main - entry point
*
* Return: 0 always, success
*/
int main(void)
{
int a = 0;
int b = 0;


for (a = 0; a < 9; a++)
{
for (b = a + 1; b <= 9; b++)
{
putchar('0' + a);
putchar('0' + b);

if (a < 8)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
