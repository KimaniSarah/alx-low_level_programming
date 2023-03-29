#include <string.h>
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
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	strncat(dest, src, n);
	return dest;
}

