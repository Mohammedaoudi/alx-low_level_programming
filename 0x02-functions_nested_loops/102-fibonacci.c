#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, startin... lowed by a space.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fiboz = 0, fibob = 1, add;

	for (count = 0; count < 50; count++)
	{
		add = fiboa + fibob;
		printf("%lu", sum);

		fiboa = fibob;
		fibob = add;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
