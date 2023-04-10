#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change for an amount of money.
 * @argv:contain arguments
 * @argc:argument count
 *
 * Return:min coins
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int h;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5; h++)
	{
		for (; cents >= coins[h]; count++)
		{
			cents -= coins[h];
		}
	}
	printf("%d\n", count);
	return (0);
}
