#include "function_pointers.h"
/**
 * array_iterator - xecutes a fctn given as a parameter on elements of array.
 * @array:the array the function will execute the array
 * @size:size of the array
 * @action:pointer to the function you need to use
 *
 * Return:0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (h = 0; h < size; h++)
	{
		(*action)(array[h]);
	}
}
