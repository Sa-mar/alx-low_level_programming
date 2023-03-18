#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print alphabets in lower case skipping few
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	while (a <= 'z')
	{
		if (a == 'q')
		{
			continue;
		}
		else if (a == 'e')
		{
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
