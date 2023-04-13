#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb:elements in the array
 * @size:size in bytes of elements
 * Return:NULL if unsuccessfulk & pointer if successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int h;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < (nmemb * size); h++)
	{
		((char *)ptr)[h] = 0;
		/**
		 * casting of the void pointer to a char pointer is necessary to
		 * ensure that we can iterate over each byte of the allocated memory bloc
		 * since char = 1 byte
		 */
	}
	return (ptr);
}
