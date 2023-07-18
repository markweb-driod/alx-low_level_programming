#include <stdio.h>

/**
 * main - outputs file name it was compiled from
 *
 * Return: Successful
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
