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
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = '0'; b <= '14'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
