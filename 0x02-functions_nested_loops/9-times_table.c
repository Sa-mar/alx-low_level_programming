#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - Prototype
 *
 * Description: a function that prints the 9 times table, starting with 0
 *
 * Return: Void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; b <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a * b) < 10)
			{
				_putchar((a * b) + '0');
			}
			else
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
			if (a < 9 && b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
