#include "holberton.h"

/**
 * isDigit - returns true if i is a number
 * @i: integer i
 * Return: true if number, false if not
 */
int isDigit(int i)
{
	return (i >= '0' && i <= '9');
}

/**
 * _atoi - converts a string to integer
 * @s: string s
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
	int res = 0;
	int negs = 0;
	int foundNumber = 0;
	int multiplier = 1;

	while (*s)
	{
		if (!isDigit(*s) && foundNumber)
			break;
		if (*s == '-')
			negs++;
		else if (isDigit(*s))
		{
			foundNumber = 1;
			if (negs % 2)
				multiplier = -1;
			res = res * 10 + (*s - 48) * multiplier;
		}
		s++;
	}
	return (res);
}
