#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - assigns memory using malloc
 * @b: number of bytes to be assigned
 *
 * Return: a pointer to the assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

