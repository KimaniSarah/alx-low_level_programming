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
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int count;
	int h;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	count = 0;

	for (h = 0; h < 5; h++)
	{
		while (cents >= coins[h])
		{
			cents -= coins[h];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
