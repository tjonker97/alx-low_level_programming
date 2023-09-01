#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		/* Check if the character is '0' or '1' */
		if (*b != '0' && *b != '1')
		{
			return (0); /* Invalid character, return 0 as per the requirement */
		}
		/* Shift the result to the left and add the current bit */
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
