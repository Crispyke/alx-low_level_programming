 lines (16 sloc)  214 Bytes
#include <stdio.h>

/**
 * main - always void
 *
 * Return: alphabet in reverse using putchar
 */

int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c >= 'a');

	putchar('\n');
	return (0);


}
