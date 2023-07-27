#include "main.h"
#include <stddef.h>

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: Pointer to a character
 * Return: Pointer to a character
 */

char *string_toupper(char *str)
{
	int length_of_string;

	length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
		if (str[length_of_string] >= 97 && str[length_of_string] <= 122)
		{
			str[length_of_string] = str[length_of_string] - 32;
		}
		length_of_string++;
	}
	return (str);
}
