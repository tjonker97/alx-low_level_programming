#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that  adds a new node at the beginning
 * of a list_t list.
 * @head: A pointer to the list_t list
 * @str: The string to be added to the node
 * Return: The address of the new element(Success)
 * or NULL(Failure)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0; /* Variable for string length */

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
