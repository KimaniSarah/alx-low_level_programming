#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '8' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
