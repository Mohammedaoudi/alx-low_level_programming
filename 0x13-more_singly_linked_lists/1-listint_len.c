#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - printd all the elements of a list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int ci = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		ci++;
	}
	return (ci);
}
