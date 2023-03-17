#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}

