#include <unistd.h>

/**
*_putchar - written tyevcharacter c to stdout
*@c: the character to print
*Return: On success 1
*On error: -1 is returened and error is set appropraitely
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}

