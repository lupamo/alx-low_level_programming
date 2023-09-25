#include <stdio.h>
/**
 * print_chessboard - prints a chess board
 * @a: num of rows
 * @[8]: num of columns
 * return: 0 after success
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
