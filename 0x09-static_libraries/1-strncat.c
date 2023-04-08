#include "main.h"
/**
 * _strncat - concentrates 2 strings
 * @dest:to be concentrated into
 * @src: string to be concentrated
 * @n: concentrate upto n bytes
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int h = 0;
	int v;

	while (dest[h] != '\0')
	{
		h++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
	dest[h] = src[v];
	h++;
	v++;
	}
	dest[h] = '\0';
	return (dest);
}
