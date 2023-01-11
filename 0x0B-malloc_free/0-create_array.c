#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of the array to create
 * @c: to be initilized
 *
 * Return: NULL or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		arr[k] = c;

	return (arr);
}
