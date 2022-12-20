#include "main.h"

/**
 * print_most_numbers - prints numbers between 0to 9
 * (neither 2 or 4)
 * Return: void
 */
void print_most_numbers(void)
{
	int n = o;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
