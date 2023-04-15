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
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
