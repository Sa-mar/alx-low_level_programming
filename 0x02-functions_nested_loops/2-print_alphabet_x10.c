#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
