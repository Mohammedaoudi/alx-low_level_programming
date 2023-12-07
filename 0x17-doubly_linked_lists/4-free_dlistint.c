#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dlistint - frees a list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *courat;

	while (head != NULL)
	{
		courat = head;
		head = head->next;
		free(courat);
	}
}
