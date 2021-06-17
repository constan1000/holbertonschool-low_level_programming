#include "search_algos.h"
/**
* binary_search - Searching algo in binary way
* @array: The array to search in
* @size: size of the array
* @value: value to be searched
* Return: the index where found else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	for (r = size - 1, l = 0; l <= r;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}