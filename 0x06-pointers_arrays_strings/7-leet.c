#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A are replaced by 4
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @s: Pointer to a string
 *
 * Return: Pointer to s
 */

char *leet(char *s)
{
	int string_length, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	/* Scan through string */
	string_length = 0;

	while (s[string_length] != '\0')
	{/* Check whether leetLetter is found */
		leetCount = 0;

		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[string_length])
			{
				s[string_length] = leetNums[leetCount];
			}
			leetCount++;
		}
		string_length++;
	}
	return (s);
}
