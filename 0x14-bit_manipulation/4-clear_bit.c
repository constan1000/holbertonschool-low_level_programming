#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to unsigned long integer
 * @index: index to clear
 * Return: 1 if success, 0 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * BIT - 1)
		return (FAILURE);
	*n &= ~(1UL << index);
	return (SUCCESS);
}
