#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array to search
 * @size: the size of the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element for which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (h = 0; h < size; h++)
	{
		if ((*cmp)(array[h]) != 0)
		{
		return (h);
		}
	}
	return (-1);
}
