#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry Point
 * @i: The digit
 *
 * Description: To get last digit of a number
 *
 * Return: The last number
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (i < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
