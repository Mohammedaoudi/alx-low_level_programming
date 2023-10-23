#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delate a node at given position
 * @head: the haed of the list
 * @index: the index of the new node
 *
 * Return: 1 if true , -1 if false
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int lng = 0;

	if (head != NULL && *head != NULL)
	{
		tmp = *head;
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		while (tmp != NULL)
		{
			lng++;
			if (lng == index)
			{
				next = tmp->next;
				tmp->next = next->next;
				free(next);
				return (1);
			}
			tmp = tmp->next;
		}
		if (index > lng)
		{
			return (-1);
		}
	}
	return (-1);
}
