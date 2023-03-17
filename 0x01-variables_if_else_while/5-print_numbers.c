#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	return (0);
}
