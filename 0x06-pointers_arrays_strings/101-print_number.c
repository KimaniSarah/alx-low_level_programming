#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: n
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
