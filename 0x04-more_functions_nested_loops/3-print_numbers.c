#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 48 + 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

