#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *cournt;
	size_t nha;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nha = 0; str[nchar]; nchar++)
		;

	new->len = nha;
	new->next = NULL;
	cournt = *head;

	if (cournt == NULL)
	{
		*head = new;
	}
	else
	{
		while (cournt->next != NULL)
			cournt = temp->next;
		cournt->next = new;
	}

	return (*head);
}
