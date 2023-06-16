#include <stdio.h>

/**
 * main - Enty point
 *
 * c program prints all possible different combinations of two digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n = 48, m = 49;

	for (n = 48 ; n <= 56; n++)
	{
		for (m = 49 ; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
