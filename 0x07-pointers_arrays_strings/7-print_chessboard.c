#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a:array
 * Return:void
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; a[m][7]; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);

	_putchar('\n');
	}
}
