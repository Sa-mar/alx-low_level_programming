#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry Point
 * @x: The string
 *
 * Description: Reverse a string in revers
 *
 * Return: Void
 */
void print_rev(char *x)
{
	int a, b;

	b = 0;
	for (a = 0; x[a] != '\0'; ++a)
	{
		b++;
	}
	for (a = b - 1; a >= 0; --a)
	{
		_putchar(x[a]);
	}
	_putchar(10);
}
