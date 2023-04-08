#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest:the pointer to be printed into
 * @src: the pointer to copy
 *
 * Return:the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}

