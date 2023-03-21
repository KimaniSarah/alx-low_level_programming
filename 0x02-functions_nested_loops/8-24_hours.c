#include "main.h"
/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59.
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int x, y, w, z;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (x == 2 && y > 3)
					{
						continue;
					}
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(w + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
			}
		}
	}
}
