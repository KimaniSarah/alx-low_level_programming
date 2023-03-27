#include "main.h"
/**
 * swap_int - swaps the arguments
 * @a: first argument
 * @b: second argument
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
