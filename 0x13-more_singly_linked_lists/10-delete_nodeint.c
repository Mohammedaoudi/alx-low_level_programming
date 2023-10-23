#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delate a node at given tosition
 * @head: the haed of the list
 * @index: the index of the new node
 *
 * Return: 1 if true , -1 if false
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *next;
	unsigned int long = 0;

	if (head != NULL && *head != NULL)
	{
		t = *head;
		if (index == 0)
		{
			*head = t->next;
			free(t);
			return (1);
		}
		while (t != NULL)
		{
			long++;
			if (long == index)
			{
				next = t->next;
				t->next = next->next;
				free(next);
				return (1);
			}
			t = p->next;
		}
		if (index > long)
		{
			return (-1);
		}
	}
	return (-1);
}
