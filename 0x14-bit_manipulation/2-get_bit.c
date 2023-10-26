#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int xa;

	if (index > 63)
		return (-1);
	xa = (n >> index) & 1;
	return (xa);
}
