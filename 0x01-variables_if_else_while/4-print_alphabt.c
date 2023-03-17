#include <stdio.h>
/**
 * main - prints the alphabet except for e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 'a' ; s <= 'z' ; s++)
	{
		if (s == 'e' || s == 'q')
		{
			continue;
		}
		putchar(s);
	}
	putchar('\n');

	return (0);
}
