#include<unistd.h>
/**
 * main-ENTRY POINT
 *
 * c program prints without puts or printf
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char strg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(0, strg, 59);
	return (1);
}
