#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: caracter to verify
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

