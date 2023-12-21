#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates the hash table
 * @size: the size of the table
 *
 * Return: a pointer to the table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = (shash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (shash_node_t **)calloc(table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: the sorted hash table.
 * @key: The key
 * @value: The value associated with key.
 *
 * Return: 0 Otherwise 1.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
			current = current->snext;
		new->sprev = current;
		new->snext = current->snext;
		if (current->snext == NULL)
			ht->stail = new;
		else
			current->snext->sprev = new;
		current->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with a key
 * @ht: the hash table.
 * @key: The key
 *
 * Return: If the key cannot be found NULL otherwise the value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 * @ht: the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
	free(ht->array);
	free(ht);
}
