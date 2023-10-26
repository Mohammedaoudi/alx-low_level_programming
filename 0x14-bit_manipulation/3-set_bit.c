#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index
 *
 * Return: 1 if correct  or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long  int  xa = 1;

	if (index > 63)
		return (-1);
	*n = ((xa << index) | *n);
	return (1);
}
