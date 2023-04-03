#include "main.h"
/**
 * print_chessboard - prints chess board
 * @a:rows
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int h;
	/**
	 * rows
	 */
	int v;
	/**
	 * column
	 */

	for (h = 0; h < 8; h++)
	{
	for (v = 0; v < 8; v++)
	{
	_putchar(a[h][v]);
	}
	_putchar('\n');
	}
}
