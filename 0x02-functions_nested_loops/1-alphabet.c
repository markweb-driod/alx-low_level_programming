#include "main.h"
#include <stdio.h>
/**
 * main - prints a-z
 *  Return: Always 1 (Success)
 */

int main(void)
{
	char letter;

	for
		(letter = 'a';
		 letter <= 'z';
		 letter++);
	{
	putchar(letter);
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
