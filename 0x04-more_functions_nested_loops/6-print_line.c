#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry Point
 * @n: the distance
 *
 * Description: Function that prints a line
 *
 * Return: void
 */
void print_line(int n)
{
	int x;
	x = 0;

	while (x < n)
	{
		_putchar('_');
		x = x + 1;
	}
	_putchar('\n');
}
