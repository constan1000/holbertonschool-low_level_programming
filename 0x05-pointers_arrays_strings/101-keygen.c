#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int target = 0xad4;
	int sum = 0;
	int random, last;

	srand(time(NULL));

	while (target - '~' > sum)
	{
		random = rand() % ('~' - '!') + '!';
		putchar(random);
		sum += random;
	}

	last = target - sum;
	putchar(last);

	return (0);
}
