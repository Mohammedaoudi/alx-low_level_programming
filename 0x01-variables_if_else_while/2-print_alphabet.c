#include <stdio.h>

/**
 * main - Entry point
 *
 * c program prints the alphabet in lowercase,followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch ; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

