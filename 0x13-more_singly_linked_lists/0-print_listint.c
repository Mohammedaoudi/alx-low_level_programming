#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - printd all the elements of a list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
