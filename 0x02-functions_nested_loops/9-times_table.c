#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - The Prototype
 *
 * Description: Function to print 9x table
 *
 * Return: Void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			if ((a * b <= 9))
			{
				_putchar(' ');
			}
			else
			{
				_putchar(((a * b) / 10) + '0');
			}
			_putchar(((a * b) % 10) + '0');
		}
		_putchar('\n');
	}
}
