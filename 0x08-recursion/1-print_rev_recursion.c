#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry Point
 * @s: The strung
 *
 * Description: A funstion that prints string in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
