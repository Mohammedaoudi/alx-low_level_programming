#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int  lng = 0, i;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		lng++;
	}
	if (index >= lng)
		return (NULL);
	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
