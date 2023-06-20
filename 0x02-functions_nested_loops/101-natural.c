#include <stdio.h>

/**
 * main -Entry point
 * Lists all the natural numbers below 1024 (excluded) that are mult.. 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, add = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			add = add + i;
	}

	printf("%d\n", add);

	return (0);
}
