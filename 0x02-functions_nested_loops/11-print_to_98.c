#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - The prototype
 * @n: the integer
 *
 * Description: A function that prints to 98
 *
 * Return: int
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (n = n; n>= 98; n--)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
