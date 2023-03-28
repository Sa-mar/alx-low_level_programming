#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - The function
 * @str: The string pointer
 *
 * Description: A function that prints every oda char
 *
 * Return: void
 */
void puts2(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st = st + 2)
	{
		_putchar(str[st]);
	}
	_putchar('\n');
}
