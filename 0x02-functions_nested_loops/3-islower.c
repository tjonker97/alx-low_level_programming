#include "main.h"

/**
 * _islower - Shows 1 if input is
 * lowercase character, else it shows 0
 *
 * @c: The character in ASCII
 *
 * Return: 1 for lowercase character. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
