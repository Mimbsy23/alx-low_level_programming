#include "main.h"

/**
 * get_bit - imprints the value of a bit at a given
 * index.
 * @r: unsigned long interger input.
 * @index: index of the bit.
 *
 * Return: all values of the bits.
 */
int get_bit(unsigned long int r, unsigned int index)
{
	unsigned int j;

	if (r == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; r >>= 1, j++)
	{
		if (index == j)
		{
			return (r & 1);
		}
	}

	return (-1);
}
