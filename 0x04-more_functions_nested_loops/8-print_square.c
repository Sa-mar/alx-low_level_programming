#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_square - The function
 * @size: size of the square
 *
 * Description: Print a square
 *
 * Return: Void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < j; i++)
		{
			for (j = 0; j < size; j++)
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
