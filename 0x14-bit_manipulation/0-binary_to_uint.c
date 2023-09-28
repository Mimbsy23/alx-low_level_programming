#include "main.h"
/**
 * binary_to_uint - the program converts binary numbers
 * to integers/decimal numbers
 *
 * @m: a character pointer to a string carrying the
 * binary numbers
 *
 * Return: the converted decimal (output)
 */
unsigned int binary_to_uint(const char *m)
{
	unsigned int len;
	size_t i = 0;
	size_t j = 0;
	size_t sum = 0;
	size_t pow = 1;
	int base = 2;

	if (m == NULL)
		return (0);
	for (len = 0; m[len] != '\0'; len++)
		;
	if (len == 1 && (m[0] == '0' || m[0] == '1'))
	{
		return (m[0] - 48);
	}
	for (i = 0; m[i] != '\0'; i++)
	{
		if (b[i] != '0' && m[i] != '1')
		return (0);
		for (j = len - 1; j > 0; j--)
		pow = pow * base;
		sum = sum + (pow * (m[i] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
