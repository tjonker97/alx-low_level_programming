#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - A  function that adds a new node
 * at the end of a listint_t list
 * @head: Double pointer to the the first element of the list
 * @n: Variable to the element to be added
 * Return: Pointer to the new list(SUCCESS)
 * Null(FAILURE)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
