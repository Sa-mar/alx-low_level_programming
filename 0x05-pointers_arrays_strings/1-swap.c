#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry Point
 * @x: fisrt number
 * @y: secong=d number
 *
 * Description: Function that swaps value of 2 ints
 *
 * Return: Void
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
