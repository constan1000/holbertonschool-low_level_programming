#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 *@c : 1 if c is digit 0 if is not
 * Return: Always 0.
 */
int _isdigit(int c)
{
return ((c >= 48 && c <= 57) ? 1 : 0);
}
