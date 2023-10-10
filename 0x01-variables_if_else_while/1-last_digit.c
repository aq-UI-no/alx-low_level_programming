#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 if successful, non-zero if error encountered
*/

int main(void)
{
int n;
int LD;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* calculate the last digit */
LD = n % 10;
/* print generated number with the following strings */
printf("Last digit of %d is ", n);
if (LD > 5)
{
printf("%d and is greater than 5\n", LD);
}
else if (LD == 0)
{
printf("%d and is 0\n", LD);
}
else if (LD < 6 && LD != 0)
{
printf("%d and is less than 6 and not 0\n", LD);
}
return (0);
}
