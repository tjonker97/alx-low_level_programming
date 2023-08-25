#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list.
 * @h: A pointer to the list
 * Return: Returns the number of elements in the list
 * pointed to by h.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
