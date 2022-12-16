#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry Point
 *
 * Description: print 1-14 times 10
 *
 * Return: void
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; ++x)
	{
		for (y = 0; y <= 14; ++y)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
