#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - A function that adds a new node at
 * the beginning of a listint_t list
 * @head: This points to the first node of the list
 * @n: The element to insert in the node
 * Return: The pointer to the new node(SUCCESS)
 * Null(FAILURE)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
