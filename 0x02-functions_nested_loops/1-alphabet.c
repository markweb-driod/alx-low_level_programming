#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - prints a-z
 *  Return: Always 0 (Success)
 */

int _putchar(char letter);
int main(void)
{
	char letter;
	for
		(letter = 'a';
		 letter <= 'z';
		 letter++);
	{
	_putchar(letter);
	_putchar(' ');
	}
	putchar('\n');
	return (0);
}
