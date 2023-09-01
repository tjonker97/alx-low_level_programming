#include "practice.h"
#include <stdio.h>

/**
 * main - Test modif_my_char_var
 * @c: Char variable to be modified
 * @p: Pointer to store address of c
 * Return: Always 0
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of 'c' before the call: %c\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);

	modif_my_char_var(p, c);

	printf("Value of 'c' after the call: %c\n", c);
	return (0);
}	
