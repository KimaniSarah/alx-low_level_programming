#include "main.h"
/**
 * _strlen - print length of string
 * @s: pointer to the first character
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
