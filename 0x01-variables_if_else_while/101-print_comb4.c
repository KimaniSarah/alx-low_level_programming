#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0' ; i <= '7' ; i++)
	{
		for (j = i + 1 ; j <= '8' ; j++)
		{
			for (k = j + 1 ; k <= '9' ; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar('\n');
		return (0);
}
