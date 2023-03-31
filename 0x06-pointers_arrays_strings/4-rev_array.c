#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - The function
 * @a: The array
 * @n: number of elemets
 *
 * Description: reverses contents of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, *rev;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
