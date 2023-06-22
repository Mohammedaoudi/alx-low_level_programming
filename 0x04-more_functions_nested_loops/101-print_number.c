#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer.
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, d, w;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	w = 1;

	while (d > 9)
	{
		d /= 10;
		x = x * 10;
	}

	for (; x >= 1; x /= 10)
	{
		_putchar(((m / x) % 10) + 48);
	}
}

