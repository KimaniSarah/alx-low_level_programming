#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n:
 *
 * Return: natural nambers
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		if (x > 9)
		{
			_putchar(x / 10 + '0');
		}
		if (x <= 9)
		{
			_putchar(' ');
		}
		_putchar(x % 10 + '0');
		if (x != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
