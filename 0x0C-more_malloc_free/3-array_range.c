#include"main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min:values to add to the array
 * @max:values to add to the array
 *
 * Return:a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int h;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < size; h++)
	{
		ptr[h] = min + h;
	}
	return (ptr);
}
