#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: Double pointer to the list to be freed
 * Return: Void(NOTHING)
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
