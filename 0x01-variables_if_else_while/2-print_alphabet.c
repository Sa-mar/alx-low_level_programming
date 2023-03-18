#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: printing A-Z in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		putchar('\n');
		a++;
	}
	return (0);
}
