#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#define SIZE 1024
/**
 * print_listint_safe - prints a list
 * @head: the headof the list
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int j = 0;
	unsigned long int i;
	const listint_t *tmp;
	const listint_t *t[SIZE];

	if (head)
	{
		tmp = head;
		while (tmp != NULL)
		{
			j++;
			i = (unsigned long int)tmp % SIZE;
			if (t[i] == tmp)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				j--;
				break;
			}
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			t[i] = tmp;
			tmp = tmp->next;
		}
		return (j);
	}
	exit(98);
}
