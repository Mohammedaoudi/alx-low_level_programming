#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary form
 *
 * Return: the converted number or 0 if not
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal = (decimal << 1) + (b[i] - '0');
		i++;
	}
	return (decimal);
}
