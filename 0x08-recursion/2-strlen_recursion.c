#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string 
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	int long = 0;

	if (*s)
	{
		long++;
		long = long + _strlen_recursion(s + 1);
	}

	return (long);
}

