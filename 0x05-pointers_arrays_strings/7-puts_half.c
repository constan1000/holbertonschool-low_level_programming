#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * puts_half - prints the second half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int size, i, half;

	size = _strlen(str);
	half = !(size % 2) ? size / 2 : (size - 1) / 2 + 1;

	for (i = half; i < size; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
