#include "main.h"
#include <stdio.h>
/**
* print_array - the integer
*@a: pointer
*@n: value of space
*
*/
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
if (i < (n - 1))
printf("%d, ", *(a + i));
else
printf("%d\n", *(a + i));
}
/**
 * main - entry point
 *Return: 0 Always
 */
int main(void)
{
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);

print_array(arr, n);

return (0);
}
