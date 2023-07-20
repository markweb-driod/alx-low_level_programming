#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string containing the name
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*m)(char *))
{
	if (m != NULL)
	{
		(m) (name);
	}
}
