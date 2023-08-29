#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: Pointer to the first node of the list
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
