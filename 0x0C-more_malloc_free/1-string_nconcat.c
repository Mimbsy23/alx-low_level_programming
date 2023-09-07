#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @p1: string to append to
 * @p2: string to concatenate from
 * @n: number of bytes from p2 to concatenate to p1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *p1, char *p2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (p1 && p1[len1])
		len1++;
	while (p2 && p2[len2])
		len2++;

	if (n < len2)
	p = malloc(sizeof(char) * (len1 + n + 1));
	else
	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!p)
		return (NULL);

	while (i < len1)
	{
		p[i] = p1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		p[i++] = p2[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = p2[j++];

	p[i] = '\0';

	return (p);
}
