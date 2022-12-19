#include "main.h"

/**
 * _strlen - length of a string
 * @s: character to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
