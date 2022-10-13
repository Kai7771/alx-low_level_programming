#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - func executes a func given as a parameter
 * on each element of an array.
 * @array: list of items
 * @size: size of the array.
 * @action: a pointer to print
 * Return: void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
