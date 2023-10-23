#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnds = 0;
	listp_t *htr, *new, *aplus;

	htr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = htr;
		htr = new;

		aplus = htr;

		while (aplus->next != NULL)
		{
			aplus = aplus->next;
			if (head == aplus->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&htr);
				return (nnds);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnds++;
	}

	free_listp(&htr);
	return (nnds);
}
