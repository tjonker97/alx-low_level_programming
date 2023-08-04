#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check the string for digits
 * @str: Array String
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /* Count String*/
	{
		if (!isdigit(str[count])) /*Check if str there are digit*/
		{
			return (0);
		}

		count++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)/*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);/*ATOI converts string to int*/
			sum += str_to_int;
		}
		/*Condition if one of the numbers contains a symbol that is not a digit*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum);
	return (0);
}
