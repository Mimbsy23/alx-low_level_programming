#include <stdio.h>
#include "main.h"
/**
* flip_bits - produces the number of bits that need to be flipped to transform
* @p: The first unsigned long integer.
* @q: The second unsigned long integer.
* Return: The number of bits that need to be flipped to transform @p into @q.
*/
unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned long int xor;
	unsigned long int count = 0;

	xor =  p ^ q;  /* puts 1 at different values posithions*/
	while (xor != 0)
	{
		count += xor & 1; /*extract the least significant bit of the XOR*/
		xor >>= 1; /*move loop*/
	}
	return (count);
}
