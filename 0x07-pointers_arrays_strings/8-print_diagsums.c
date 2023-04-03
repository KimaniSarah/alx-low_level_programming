#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -print the sum of the 2 diagonals of a square matrix
 * @a:index
 * size:size of matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int h;
	int sum1 = 0;
	int sum2 = 0;

	for (h = 0; h < size; h++)
	{
		sum1 += a[h * size + h];
		/**
		 * adds the value of the element at position (h, h)
		 * if size is 4 and i is 2,I want to access the element at position (2, 2)
		 * In a 1D array, this element is located at index 2 * 4 + 2 = 10.
		 */
		sum2 += a[(h + 1) * (size - 1)];
		/**
		 * adds the value of the element at(h, size - h - 1)
		 * if size is 4 and i is 2,i want to access the element at position (2, 1)
		 * In a 1D array, this element is at index (2 + 1) * (4 - 1) = 9.
		 */
	}
	printf("%d, %d\n", sum1, sum2);
}
