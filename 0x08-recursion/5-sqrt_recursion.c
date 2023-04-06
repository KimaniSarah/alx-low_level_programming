#include "main.h"
/**
 * sqrt_find - find square root of numbers
 * @n:the number to find square root on
 * @h:the square root
 *
 * Return: h otherwise if no square root exist -1
 */
int sqrt_find(int n, int h)
{
	if (h * h == n)
	{
		return (h);
	}
	else if (h * h > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_find(n, h + 1));
	}
}
/**
 * _sqrt_recursion - find square root
 * @n: the number the square root is being found
 *
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		/**
		 * negative numbers dont have square roots
		 */
	{
		return (-1);
	}
	else
	{
		return (sqrt_find(n, 0));
	}
}
