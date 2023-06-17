#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
char lowercase, uppercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	putchar(lowercase);

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	putchar(uppercase);

putchar('\n');

return (0);
}

