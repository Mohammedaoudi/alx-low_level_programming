#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * somme_dlistint - sum of all data
 * @head: the head of the list
 *
 * Return: somme or 0 if the list is empty
 */
int somme_dlistint(dlistint_t *head)
{
	int somme = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
