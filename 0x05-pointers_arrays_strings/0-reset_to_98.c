#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - The function
 * @n: The Pointer
 *
 * Description: a function that update value
 *
 * Return: Void
 */
void reset_to_98(int *n)
{
	int a;

	n = &a;
	*n = 98;
	_putchar(a);
}
