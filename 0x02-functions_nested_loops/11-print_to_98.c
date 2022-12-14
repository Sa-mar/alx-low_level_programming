#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry Point
 * @n: starting point
 *
 * Description: count natural numbers
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; --n)
		{
			_putchar('%d, ', n);
		}
		_putchar('%d\n', 98)
	}
	else
	{
		for (n = n; n < 98; ++n)
		{
			_putchar('%d, ', n);
		}
		_putchar('%d\n', 98);
	}
}
