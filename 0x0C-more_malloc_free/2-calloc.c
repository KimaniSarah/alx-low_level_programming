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
	for (h = 0; h < nmemb; h++)
	{
		((char *)ptr)[h] = 0;
		/**
		 * i cast the void pointer to char * in order to iterate
		 * over each byte of the allocated memory since char = 1byte
		 */
	}
	return (ptr);
}
