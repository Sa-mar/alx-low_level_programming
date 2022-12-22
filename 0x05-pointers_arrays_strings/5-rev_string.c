#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_string - Entry Point
 * @x: The string
 *
 * Description: Reverse a string in revers
 *
 * Return: Void
 */
void rev_string(char *x)
{
	int a, b, c;
	char result;

	c = 0;
	for (a = 0; x[a] != '\0'; ++a)
	{
		c++;
	}
	b = 0;
	for (a = c - 1; a >= 0; --a)
	{
		result[b] = x[a];
	}
}
