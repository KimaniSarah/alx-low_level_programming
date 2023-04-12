#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width:the column in the 2d array
 * @height:the row
 *
 * Return:the 2d array
 */
int **alloc_grid(int width, int height)
{
	int h;
	int v;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = (int *)malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			for (v = 0; v < h; v++)
				/**
				 * iterate over already created memory to free it befor the eror null occur
				 */
			{
				free(ptr[v]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (v = 0; v < width; v++)
		{
			ptr[h][v] = 0;
		}
	}
	return (ptr);
}
