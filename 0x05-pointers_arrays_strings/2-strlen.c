#include "holberton.h"

/**
 * _strlen - swaps the value of two integers
 *@s: pointer s
 */
int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}
