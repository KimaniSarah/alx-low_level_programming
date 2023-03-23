#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int z;
	for (z = 0; z <= '9'; z++)
	{
		if (z == '2' || z == '4')
		{
			continue;
		}
		else
		{
			_putchar(z + '0');
		}
	}
	_putchar('\n');
}
