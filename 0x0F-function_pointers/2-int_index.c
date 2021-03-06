#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: comparison function
 * Return: index of integer found in cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	register int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
