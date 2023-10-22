#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 always, successful
*/
int main(void)
{
long long int fib1 = 1, fib2 = 2, nextFib;
int count;

printf("%lld, %lld, ", fib1, fib2);

for (count = 3; count <= 50; count++)
{
nextFib = fib1 + fib2;
printf("%lld", nextFib);

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
