#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the head of the list
 *
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *next;
	unsigned int len = 0;

	if (h && *h)
	{
		tmp = *h;
		while (tmp != NULL)
		{
			len++;
			next = tmp;
			tmp = tmp->next;
			free(next);
			if (next <= tmp)
				break;
		}
		*h = NULL;
		return (len);
	}
	return (0);
}
