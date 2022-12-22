#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - Entry Point
 * @str: The string
 *
 * Description: A function that prints a string
 *
 * Return: Void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		*str = ++*str;
	}
	_putchar(10);
}
