#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Entry Point
 * @a: the chessboard
 *
 * Description: a function that prints chessboard
 *
 * Return:  void
 */
void print_chessboard(char (*a)[8])
{
	int r = 0;
	int c;

	while (r <= 7)
	{
		c = 0;
		while (c <= 7)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\10');
		r++;
	}
}
