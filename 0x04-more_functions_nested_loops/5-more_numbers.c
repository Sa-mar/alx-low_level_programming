#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - The function
 *
 * Description: print from 0 - 14 x 10
 *
 * Return: Void
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}

			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
