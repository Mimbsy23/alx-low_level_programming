#include "main.h"

/**
 * clear_bit - puts the value of a bit to 0.
 * at a given index.
 * @m: pointer of an unsigned long interger.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *m, unsigned int index)
{
	unsigned int r;

	if (index > 63)
		return (-1);

	r = 1 << index;

	if (*m & r)
		*m ^= r;

	return (1);
}
