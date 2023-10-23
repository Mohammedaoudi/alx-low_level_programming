#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nouveau node at given tmposition
 * @head: the haed of the list
 * @idx: the index of the nouveau node
 * @n: the data of the nouveau node
 *
 * Return: the adress of the nouveau node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *nouveau;
	unsigned int lpng = 1;

	if (head)
	{
		nouveau = malloc(sizeof(listint_t));
		if (nouveau == NULL)
			return (NULL);
		nouveau->n = n;
		if (idx == 0)
		{
			nouveau->next = *head;
			*head = nouveau;
			return (nouveau);
		}
		tmp = *head;
		while (tmp != NULL)
		{
			if (lpng == idx)
			{
				nouveau->next = tmp->next;
				tmp->next = nouveau;
				return (nouveau);
			}
			tmp = tmp->next;
			lpng++;
		}
		if (idx > lpng)
		{
			return (NULL);
		}
	}
	return (NULL);
}
