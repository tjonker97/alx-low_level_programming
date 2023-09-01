#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *byte_pointer = (char *)&value;

	return ((int)*byte_pointer);
}
