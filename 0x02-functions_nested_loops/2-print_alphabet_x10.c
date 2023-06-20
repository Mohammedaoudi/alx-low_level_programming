#include "main.h"

/**
 *c program with function: print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 97;
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
