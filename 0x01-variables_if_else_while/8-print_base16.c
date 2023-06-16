#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	char ch = 'a';

	for (n ; n < 58; n++)
	{
		putchar(n);
	}
	for (ch ; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

