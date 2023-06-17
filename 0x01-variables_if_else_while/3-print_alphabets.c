#include <stdio.h>
/**
 * prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return void
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

