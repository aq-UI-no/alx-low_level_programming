#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0, always, success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
		return (0);
}
