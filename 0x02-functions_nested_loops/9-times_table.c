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
			_putchar(a * b);
			if (a < 9 && b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
