#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - The function
 *
 * Description: Fundtion to print alphabet
 *
 * Return: A void function
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
