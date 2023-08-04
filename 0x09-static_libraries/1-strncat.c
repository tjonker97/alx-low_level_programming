#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Integer for number of bytes to be used
 * Return: Pointer to an array of characters
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';

	return (dest);
}
