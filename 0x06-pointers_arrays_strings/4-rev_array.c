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
	int i;

	for (i = n; i >= 0; i--)
	{
		putchar(a[i]);
	}
	putchar('\n');
}
