#include "main.h"

/**
 * _isupper - checks if character is upper case
 * @c: input
 *
 * Return: 1 if uppercase, 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
