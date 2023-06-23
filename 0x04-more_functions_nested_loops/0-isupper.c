#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c  = 'A';

	if (isupper(c))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
	return (0);
}
