#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: the pointer as input
 * @src:
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int h = 0;
	int v;

	while (dest[h] != '\0')
	{
		h++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[h] = src[v];
		h++;
		v++;
	}

	dest[h] = '\0';
	return (dest);
}

