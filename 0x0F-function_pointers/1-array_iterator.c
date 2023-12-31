#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
  * array_iterator - imprints a function given as a parameter on
  * each element of an array.
 * @array: the integer array to iterate over
 * @size: the size of the array
 * @action: a function to the pointer you need to use
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
