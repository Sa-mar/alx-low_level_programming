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

	if (c >= '0' && c <= '9')
	{
		_putchar(c);
	}
	_putchar('\n');
}
