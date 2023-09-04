#include "main.h"
#include <stdlib.h>
/**
 * str_concat - gives sizable memory to Dubai ALX students
 * @p1: input one to concat
 * @p2: input two to concat
 * Return: concat of p1 and p2
 */
char *str_concat(char *p1, char *p2)
{
	char *conct;
	int i, ci;

	if (p1 == NULL)
		p1 = "";
	if (p2 == NULL)
		p2 = "";

	i = ci = 0;
	while (p1[i] != '\0')
		i++;
	while (p2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (p1[i] != '\0')
	{
		conct[i] = p1[i];
		i++;
	}

	while (p2[ci] != '\0')
	{
		conct[i] = p2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
