#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: number to be squared
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
/**
 * find_sqrt - finds the square root
 * @n: number
 * @i: integer
 *
 * Return: -1 or square root
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}
