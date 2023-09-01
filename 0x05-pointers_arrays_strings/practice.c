#include "practice.h"
#include <stdio.h>

/**
 * modif_my_char_var - To be solved
 * @cc: Pointer to a character variable
 * @ccc: A character variable
 * Return: Void
 */

void modif_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc': %p\n", cc);
	printf("Value of 'ccc': %c\n", ccc);
	*cc = 'o';
	ccc = 'l';
}
