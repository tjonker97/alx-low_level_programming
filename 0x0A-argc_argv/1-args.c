#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: The number ofarguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* Silence argv since it is not used */
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
