#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits -  the number of bits you would need to flip to get from one
 * number to another
 * @n: input
 * @m: input
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, ca = 0;
	unsigned long int ab;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		ab = xor >> i;
		if (ba & 1)
			ca++;
	}
	return (ca);
}
