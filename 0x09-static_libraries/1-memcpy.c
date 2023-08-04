#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @src: Pointer to the source area
 * @dest: Pointer to the destination area
 * @n: Number of bytes to be copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
