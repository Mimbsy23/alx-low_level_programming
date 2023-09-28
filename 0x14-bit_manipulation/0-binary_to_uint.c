#include "main.h"

/**
 * binary_to_uint - this code converts a binary number to an
 * unsigned interger.
 * @m: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *m)
{
	unsigned int upi;
	int len, base_two;

	if (!m)
		return (0);

	upi = 0;

	for (len = 0; m[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (m[len] != '0' && m[len] != '1')
		{
			return (0);
		}

		if (m[len] & 1)
		{
			upi += base_two;
		}
	}

	return (upi);
}
