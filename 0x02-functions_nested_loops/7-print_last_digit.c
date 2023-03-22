#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - The prototype
 * @n: The number
 *
 * Description: function that prints the last digit of a number
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		_putchar((last * -1) + '0');
		return (last * -1);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
