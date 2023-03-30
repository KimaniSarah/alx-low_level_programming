#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to be reversed
 * @n: number of elements of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
