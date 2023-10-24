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
	listint_t *p, *next;
	unsigned int len = 0;

	if (h && *h)
	{
		p = *h;
		while (p != NULL)
		{
			len++;
			next = p;
			p = p->next;
			free(next);
			if (next <= p)
				break;
		}
		*h = NULL;
		return (len);
	}
	return (0);
}
