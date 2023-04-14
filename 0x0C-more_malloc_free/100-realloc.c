#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:the old memory block
 * @old_size:size of old block
 * @new_size:size of new block
 *
 * Return:the new memory block if successful ,NULL if unsuccessful
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int h, min_size;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = (void *)malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && *((char *)ptr) != '\0')
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = (void *)malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		min_size = old_size;
	}
	else
	{
		min_size = new_size;
	}
	for (h = 0; h < min_size; h++)
	{
		((char *)new_ptr)[h] = ((char *)ptr)[h];
	}
	free(ptr);
	return (new_ptr);
}
