#include <stdio.h>
#include <stddef.h> /* For size_t */
#include "lists.h"

/**
 * print_list - A function that prints all the elemnts of
 * a linked list
 * @h: A pointer to the list to print
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
