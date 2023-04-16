#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - The function
 * @n: Number of times to print character
 *
 * Description: Function to print diagonal line
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
