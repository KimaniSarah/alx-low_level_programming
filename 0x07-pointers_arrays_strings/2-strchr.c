#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string.
 * @s: the string potentially containing the character
 * @c: the character to be located
 *
 * Return: c, NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
