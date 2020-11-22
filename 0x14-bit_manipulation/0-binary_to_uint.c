#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 * Return: unsigned decimal conversion of input is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	uint res = 0;

	if (!b)
		return (res);
	while (*b)
	{
		if (!isBinary(*b))
			return (0);
		res = (res * 2) + (*b++ - '0');
	}
	return (res);
}

/**
 * isBinary - checks if char is valid binary
 * @c: input char
 * Return: true or false
 */
_Bool isBinary(char c)
{
	return (c == '1' || c == '0');
}
