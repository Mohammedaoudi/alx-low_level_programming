#include <stdio.h>

/**
 * main - Entry point
 * c program prints the lowercase alphabet in reverse,followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z' ; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
