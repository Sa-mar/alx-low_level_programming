#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - The prototype
 *
 * Description: function that prints the last digit of a number
 *
 * Return: The last digit
 */
int print_last_digit(int)
{
	int n, lastdgt;

	lastdgt = ((n % 10) + '0');
	return (lastdgt);
}
