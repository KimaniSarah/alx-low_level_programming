#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: the block to be filled
 * @b: the value to be filled into s
 * @n: size of b (number of bytes)
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
}
