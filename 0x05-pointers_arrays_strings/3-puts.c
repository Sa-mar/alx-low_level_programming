#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - The function
 * @str: The string pointer
 *
 * Description: A function that prints string
 *
 * Return: void
 */
void _puts(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)
	{
		_putchar(str[st]);
	}
	_putchar('\n');
}
