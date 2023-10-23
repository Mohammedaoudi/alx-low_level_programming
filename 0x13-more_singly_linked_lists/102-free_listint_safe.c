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
	listint_t *t, *next;
	unsigned int lng = 0;

	if (h && *h)
	{
		t = *h;
		while (t != NULL)
		{
			lng++;
			next = t;
			t = t->next;
			free(next);
			if (next <= t)
				break;
		}
		*h = NULL;
		return (lng);
	}
	return (0);
}
