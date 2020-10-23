#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
			printf("%i%s", va_arg(arguments, int), separator);
		else
			printf("%i", va_arg(arguments, int));
	}
	printf("\n");
	va_end(arguments);
}
