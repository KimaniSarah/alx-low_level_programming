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
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	strncpy(dest, src, n);
	return (dest);
}

