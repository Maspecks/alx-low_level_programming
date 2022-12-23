#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string we append to
 * @src: the source string we add to
 * Return: A pointer to dest, i.e the resulting string
 */
char *_strcat(char *dest, char *src);
{
	int i = 0, j = 0;

	while (dest[j++])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
