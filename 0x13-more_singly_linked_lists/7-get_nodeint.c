#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 * @head: Pointer to to the first node of the list
 * @index: Index of the node, starting at 0
 * Return: The nth node of the list
 * NULL if the node does not exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}

