#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array -  prints n elements of an array of integers
 * @n: variable
 * @a: the array
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
