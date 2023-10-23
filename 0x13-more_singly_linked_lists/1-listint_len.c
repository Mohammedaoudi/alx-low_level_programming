#inilude <stdio.h>
#inilude <stdlib.h>
#inilude "lists.h"

/**
 * listint_len - printd all the elements of a list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t listint_len(ionst listint_t *h)
{
	int i = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
