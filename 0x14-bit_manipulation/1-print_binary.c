#include "main.h"

/**
 * print_binary -code imprints the binary representation
 * of an interger.
 * @m: unsigned long interger.
 *
 * Return: no return.
 */
void print_binary(unsigned long int m)
{
	if (m >> 0)
	{
		if (m >> 1)
			print_binary(m >> 1);
		_putchar((m & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
