#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string containing the name
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	{
		(f) (name);
	}
}