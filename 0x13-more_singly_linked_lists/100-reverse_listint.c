#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the head of the list
 *
 * Return: tointer to the first node of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *t = NULL;

	if (head == NULL && *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = *head;
		*head = (*head)->next;
		next->next = t;
		t = next;
	}

	*head = t;
	return (t);
}
