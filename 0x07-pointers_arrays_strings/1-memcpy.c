#include "main.h"
/**
 * memcpy -  copies memory area.
 * @dest: destination string , copied to
 * @src: source string ,copied from
 * @n: no of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		src[h] = dest[h];
	}
	return (dest);
}
