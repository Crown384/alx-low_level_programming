#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Lrints All hexadecimal numbers without using printf or puts fx
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char len;
	int dex;

	for (dex = '0'; dex <= '9'; dex++)
	putchar(dex);

	for (len = 'a'; len <= 'f'; len++)
	putchar(len);
	putchar('\n');
	return (0);
}
