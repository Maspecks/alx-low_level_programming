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
	if (size == 0)
	{
		return (NULL);
	}

	char [] = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
