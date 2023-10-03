#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *chain;
	unsigned int i;

	chain = malloc(sizeof(char) * size);
	if (size == 0 || chain == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chain[i] = c;
	return (chain);
}

