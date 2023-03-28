#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - The function
 * @s: The string pointer
 *
 * Description: A function that prints string in reverse
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int st;
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (st = count - 1; st >= 0; st--)
	{
		_putchar(s[st]);
	}
	_putchar('\n');
}
