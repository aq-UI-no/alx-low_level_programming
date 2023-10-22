#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always, success
 */
int main(void)
{
    int i;

    for (i = 0; i <= 15; i++) {
        if (i < 10) {
            putchar('0' + i); /* prints digits 0 - 9 */
        } else {
            putchar('a' + i - 10); /* prints a-f in lowercase */
        }
    }
    putchar('\n'); /* prints a new line at the end of the line */

    return (0);
}

