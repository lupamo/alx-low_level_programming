#include <stdio.h>
/**
 * print_chessboard - prints a chess board
 * @a: num of rows
 * @[8]: num of columns
 * return: none
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
