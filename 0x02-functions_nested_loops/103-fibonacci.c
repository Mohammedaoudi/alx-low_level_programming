#include <stdio.h>

/**
 * main -c program that finds and prints the s...ine
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j = 1, k = 2, after, summ = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			summ = summ + j;
		}
		after = j + k;
		j = k;
		k = after;
	}

	printf("%lu\n", summ);

	return (0);
}
