#include <stdio.h>
/**
*main - entry point
*
*Return: 0 always, success
*/
int main(void)
{
long fib1 = 1, fib2 = 2, nextFib;
long sum = 2;

while (1)
{
nextFib = fib1 + fib2;
if (nextFib > 4000000)
{
break;
}

if (nextFib % 2 == 0)
{
sum += nextFib;
}

fib1 = fib2;
fib2 = nextFib;
}

printf("%ld\n", sum);

return (0);
}
