#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current = ht->array[index];
			while (current != NULL)
			{
				free(current->key);
				free(current->value);
				temp = current->next;
				free(current);
				current = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
