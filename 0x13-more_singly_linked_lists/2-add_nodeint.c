#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node tothe beginning of the list
 * @head: the head of the list
 * @n: the content of the node
 *
 * Return: address of nouv element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouv = malloc(sizeof(listint_t));

	if (nouv == NULL)
		return (NULL);
	nouv->n = n;
	if (*head == NULL)
	{
		*head = nouv;
		nouv->next = NULL;
		return (*head);
	}
	nouv->next = *head;
	*head = nouv;
	return (*head);
}
