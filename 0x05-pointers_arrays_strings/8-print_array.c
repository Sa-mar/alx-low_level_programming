#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - The function
 * @a: the pointer
 * @n: the integer
 *
 * Description: print n elements of an integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
