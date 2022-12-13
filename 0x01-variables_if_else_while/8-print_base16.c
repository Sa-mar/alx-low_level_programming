#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all numbers of base 16 in lc
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 70; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
