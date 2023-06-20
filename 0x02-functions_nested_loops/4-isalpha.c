#include "main.h"

/**
 *main-Entry point
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z'));
}
