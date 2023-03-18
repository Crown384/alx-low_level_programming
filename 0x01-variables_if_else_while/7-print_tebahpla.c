#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Prints lower() in reverse order
 * Return: Always(success)
 *
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
