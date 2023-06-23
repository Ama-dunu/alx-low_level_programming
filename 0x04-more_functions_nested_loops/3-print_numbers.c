#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - Print the numbers since 0 up to 9
 * Return: The numbers from 0 up to 9
 */

void print_numbers(void)

{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
