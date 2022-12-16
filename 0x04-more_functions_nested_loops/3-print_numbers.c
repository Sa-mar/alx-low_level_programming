#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry Point
 *
 * Description: Print numbers and a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
