#include <stdio.h>
/**
 * main - lowercase and uppercase alphabet
 *
 * Return: 0 when true
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
