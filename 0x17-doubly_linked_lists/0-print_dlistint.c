#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 *
 * Return:the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t node = 0;

	if (h == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node++;
	}
	return (node);
}
