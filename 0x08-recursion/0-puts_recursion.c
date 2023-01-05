#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry Point
 * @s: The strung
 *
 * Description: A funstion that prints string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*str == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*str);
		_puts_recursion(s + 1);
	}
}
