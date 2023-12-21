#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int comma = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current = ht->array[index];
			if (comma == 1)
				printf(", ");
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}

	printf("}\n");
}
