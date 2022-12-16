#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry Point
 * @size: the lenght
 *
 * Description: prints square follwed by a line
 *
 * Retyrn: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; ++x)
		{
			for (y = 0; y < size; ++y)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
