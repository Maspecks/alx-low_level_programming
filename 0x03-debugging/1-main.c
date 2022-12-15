#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);/** no increment in the code thus infinite loop*/
	}
	printf("infinte loop avoided! \\o/\n");

	return (0);
}
