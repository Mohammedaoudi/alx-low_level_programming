#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: the number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int xa = 1;
	int i, ca = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((xa << i) & n)
		{
			_putchar('1');
			ca = 1;
		}
		else if (ca)
			_putchar('0');
	}
	if (!ca)
		_putchar('0');
}
