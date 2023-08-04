#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: String whose length is to be returned
 * Return: String length
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
	{
		string_length++;
	}
	return (string_length);
}
