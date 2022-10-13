#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - compares values in a func
 * array:  list of values
 * @size: size of array
 * @cmp: pointer function that compares
 * Return: return -1 if size <= 0, else index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
		return (-1);
}
