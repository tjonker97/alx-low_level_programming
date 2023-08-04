#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* Silence the unused variable*/
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
