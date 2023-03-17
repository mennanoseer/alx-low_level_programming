#include <stdio.h>

/**
 * main - no. of base 16
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (c = 'a' ; c < 'g' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
