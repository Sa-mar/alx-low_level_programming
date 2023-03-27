#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - the function
 * @a: first number
 * @b: second number
 *
 * Description: A function that swaps val of 2 int
 *
 * Return: Void
 */
void swap_int(int *a, int *b);
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
