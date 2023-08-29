#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: Double pointer to the firstnode of the list
 * to be freed
 * Return: The node's data
 * 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
