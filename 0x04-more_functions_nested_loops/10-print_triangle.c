#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry Point
 * @size: the height
 *
 * Description: prints a triangle
 *
 * Return: void
 */
void print_trinagle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x=1; x <= size; ++x)
		{
			for (y = size; y >= 1; --y)
			{
				if (x > y)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
