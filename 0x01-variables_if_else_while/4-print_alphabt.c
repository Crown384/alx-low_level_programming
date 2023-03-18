#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main- Prints all alpha except e and q
 * Return: Always(success)
 *
 */

int main(void)
{
	char len;

	for (len = 'a'; len <= 'z'; len++)
	if (len !='e' && len !='q')
	{
	putchar(len);
	}
	putchar('\n');
	return (0);
}
