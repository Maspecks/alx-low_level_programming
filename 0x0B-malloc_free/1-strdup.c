#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to the duplicate of a new string
 * @str: The string with the duplicate
 *
 * Return: Returns NULL if str is NULL or there's insufficient memory
 * Else - a pointer to the dupliate string is returned
 */

char *_strdup(char *str)
{
	char *sec_copy;
	int x, length = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		length++;

	sec_copy = malloc(sizeof(char) * (length + 1));

	if (sec_copy == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		sec_copy[x] = str[x];
	sec_copy[length] = '\0';

	return (sec_copy);
}
