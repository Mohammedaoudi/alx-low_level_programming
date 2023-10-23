#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node tothe beginning of the list
 * @head: the head of the list
 * @n: the content of the node
 *
 * Return: address of nouveau element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *nouveau = malloc(sizeof(listint_t));

	if (nouveau == NULL)
		return (NULL);
	nouveau->n = n;
	if (*head == NULL)
	{
		*head = nouveau;
		nouveau->next = NULL;
		return (*head);
	}
	nouveau->next = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nouveau;
	return (*head);
}
