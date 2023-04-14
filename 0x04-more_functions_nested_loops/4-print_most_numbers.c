#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - The function
 *
 * Description: print some and skip some numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
		{
			break;
		}
		else if (i == 52)
		{
			break;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
