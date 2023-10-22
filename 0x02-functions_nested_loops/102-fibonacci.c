#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 always, successful
*/
int main(void)
{
long int fib1 = 1, fib2 = 2, nextFib;
int count;

printf("%ld, %ld, ", fib1, fib2);

for (count = 3; count <= 50; count++)
{
nextFib = fib1 + fib2;
printf("%ld", nextFib);

if (count < 50)
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
