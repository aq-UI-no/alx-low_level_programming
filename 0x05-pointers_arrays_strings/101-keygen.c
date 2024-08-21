#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a valid password for the 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    char password[100];
    int i = 0;

    srand(time(NULL));

    while (sum < 2772)  // Target sum based on reverse engineering
    {
        password[i] = rand() % 78 + 48; // Generate a random printable character
        sum += password[i];
        i++;
    }

    password[i] = '\0';

    if (sum > 2772) // Adjust the last character if the sum exceeds 2772
    {
        int excess = sum - 2772;
        password[i - 1] -= excess;
    }

    printf("%s", password);

    return (0);
}
