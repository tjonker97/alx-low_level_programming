#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - A function that returns the number of
 * elements in a linked listint_t list.
 * @h: Pointer to the linked list to be printed
 * Return: The number of nodes of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
