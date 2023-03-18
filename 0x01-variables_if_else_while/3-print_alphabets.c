#include <stdio.h>

/**
 * main- Orints lowercase then uppercase
 * Return: Always(success)
 *
 */

int main(void)
{
	char len;
	
	for(len = 'a';len <= 'z';len ++)
	putchar(len);
	
	for(len = 'A';len <= 'Z';len ++)
	putchar(len);
	putchar('\n');
	return (0);
}
