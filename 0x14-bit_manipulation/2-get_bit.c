#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input unsigned long
 * @index: index to return
 * Return: value at input index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * BIT - 1)
		return (FAILURE);
	return ((n >> index) & 1);
}
