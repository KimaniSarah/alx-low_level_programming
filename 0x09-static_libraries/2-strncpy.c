#include "main.h"
/**
 * *_strncpy - copies a string.
 * @dest:the destination pointer
 * @src: the source pointer
 * @n:no of bytes that can be copied to dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h = 0;

	while (h < n && src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}

	return (dest);
}
