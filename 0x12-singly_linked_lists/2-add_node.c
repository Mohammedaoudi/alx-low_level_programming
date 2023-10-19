#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node to the beginning of the list
 * @head: head of the list
 * @str: the string of the node
 *
 * Return: address id the new node or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;
	new->str = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
		return (*head);
	}
	new->next = *head;
	*head = new;

	return (*head);
}
