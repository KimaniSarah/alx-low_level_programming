#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars,and initializes with a specific char
 * @size:the number of characters in the array
 * @c:the character to be initialized
 *
 * Return:a pointer or null if unsuccessful or 0 if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int h;
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (h = 0; h < size; h++)
	{
		ptr[h] = c;
	}
	return (ptr);
}
