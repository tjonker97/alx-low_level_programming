#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to copy
 * Return: Pointer to des
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/**
	 * Copy at most n characters
	 * from src to dest
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/**
	 * If 'src' has fewer than 'n' characters,
	 * pad 'dest' with null characters
	 */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
