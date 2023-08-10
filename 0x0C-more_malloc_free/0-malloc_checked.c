#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checke - allocates memory using malloc
 * @b: Size of the memory to be allocated
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
