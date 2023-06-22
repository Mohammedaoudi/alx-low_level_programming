#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers- prints the numbers, from 0 to 9, followed by a new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
	{
		if (i == 50 || i == 52)
			;
		else
			_putchar(i);
	}
	_putchar('\n');
}

