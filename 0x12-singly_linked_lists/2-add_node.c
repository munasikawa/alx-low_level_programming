#include "lists.h"

/**
 * add_node - Adds new node at beginning of list
 * @head: The head of the list_t
 * @str: The string to be added to the list_t list.
 * Return: NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new->str = strdup(str) ? strdup(str) : (NULL);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
