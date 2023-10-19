#include "lists.h"
/**
 * add_node - adds a nv node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nv;
	size_t nchar;

	nv = malloc(sizeof(list_t));
	if (nv == NULL)
		return (NULL);

	nv->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	nv->len = nchar;
	nv->next = *head;
	*head = nv;

	return (*head);
}
