#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = '0' ; x < 100 ; x++)
	{
		for (y = x ; y < 100 ; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
