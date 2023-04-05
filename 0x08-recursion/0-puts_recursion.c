#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - The function
 * @s: The string
 *
 * Description: a function that prints string
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
