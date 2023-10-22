#include <stdio.h>
/**
* main- entry point
*
* Return: 0 always, success
*/

int main(void)
{
int fib1 = 1, fib2 = 2, nextFib;
int count;

printf("%d, %d, ", fib1, fib2);

for (count = 3; count <= 98; count++)
{
nextFib = fib1 + fib2;
printf("%d", nextFib);

if (count < 98)
{
printf(", ");
}
else
{
printf("\n");
}

fib1 = fib2;
fib2 = nextFib;
}

return (0);
}
