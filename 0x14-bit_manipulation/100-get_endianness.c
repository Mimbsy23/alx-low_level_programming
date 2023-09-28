#include "main.h"

/**
 * get_endianness - evaluates the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int u;
	char *p;

	u = 1;
	p = (char *) &u;

	return ((int)*p);
}
