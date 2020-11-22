#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	register int a, b, i;
	int (*fptr)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);
	fptr = get_op_func(argv[2]);
	if (!fptr)
		printf("Error\n"), exit(99);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = fptr(a, b);
	printf("%i\n", i);
	return (0);
}
