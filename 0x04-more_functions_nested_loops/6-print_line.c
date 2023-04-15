#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_line - The function
 * @n: number of times character to be printed
 *
 * Description: Drawing a line on the terminal
 *
 * Return: Void
 */
void print_line(int n)
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
			_putchar('_');
		}
	}
	_putchar('\n');
}
