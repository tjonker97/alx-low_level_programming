#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: Pointer to str
 * Return: Pointer to the duplicated string (Success).
 * NULL (Failure)
 */

char *_strdup(char *str)
{
	char *c;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		c[r] = str[r];

	return (c);
}
