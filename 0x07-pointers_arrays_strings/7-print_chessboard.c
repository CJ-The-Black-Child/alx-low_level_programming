#include "main.h"

/**
 * print_chessboard - Prints a chessboad.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int idx1, idx2;

	for (idx1 = 0; a[idx1][7]; idx1++)
	{
		for (idx2 = 0; idx2 < 8; idx2++)
			_putchar(a[idx1][idx2]);
		_putcahr('\n');
	}
}
