#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to be reversed
 * @n: number of elements of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;
	int temp;

	for ((c = 0; b = n - 1; c < b) c++, b--)
	{
		temp = a[c];
		a[c] = a[b];
		a[b] = temp;
	}
}
