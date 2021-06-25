#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or (-1) if value does not exist
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (size > 0)
	{
		for (; index < size; index++)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
	}
	return (-1);
}