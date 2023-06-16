#include <stdio.h>

/**
 * main -Entry point
 * c program prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48, m = 49, l = 50;

	for (; n < 58; n++)
	{
		for (; m < 58; m++)
		{
			for (; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
