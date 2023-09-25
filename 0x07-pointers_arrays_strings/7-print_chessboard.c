#include <stdio.h>
/**
 * print_chessboard - prints a chess board
 * @a: num of rows
 * @[8]: num of columns
 * return: 0 after success
 */
void print_chessboard(char (*a)[8])
{
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			printf("%c ", a[row][column]);
		}
		printf("\n");
	}
}
