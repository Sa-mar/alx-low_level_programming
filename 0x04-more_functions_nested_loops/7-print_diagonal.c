#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry Point
 *
 * @n: numbers of the diagonal character
 *
 * Description: print diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x =1; x<= n; ++x)
		{
			for (y = 1; y<= x; ++y)
			{
				if (y != 1)
				{
					_putchar(' ');
				}
				if (y == x)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
