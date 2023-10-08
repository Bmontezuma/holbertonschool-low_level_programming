#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @board: The 2D array representing the chessboard.
 *
 * Description: This function takes a 2D array representing a chessboard and
 * prints it to the console, separating each piece with a space and each row
 * with a newline character.
 */
void print_chessboard(char board[8][8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(board[row][col]);
			putchar(' ');
		}
		putchar('\n');
	}
}
