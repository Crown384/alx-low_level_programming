#include "main.h"

/**
 * print_to_98 - Orunts 98 no
 * @n: cbafactee tk be sikves
 * Return: Alwags 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf('%d', n);
	}
	}
	}
	else
	{
	for (;n >= 98; n--)
	{
	if (n == 98)
	{
	printf('%d', n);
	printf('\n');
	break;
	}
	else
	{
	printf('%d, ', n);
	}
	}
	}
}

