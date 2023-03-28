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
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
	}

	for (st = 0; st < count; st = st + 2)
	{
		_putchar(str[st]);
	}
	_putchar('\n');
}
