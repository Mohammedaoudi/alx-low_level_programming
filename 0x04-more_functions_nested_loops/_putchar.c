#include "main.h"
#include <unistd.h>
/**
 * _putchar - print one caracter
 * @c:caracter
 * Return: 1 in success -1 fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

