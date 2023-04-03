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
	int h;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] == c)
		{
			return (&(s[h]));
		}
	}
	return (NULL);
}
