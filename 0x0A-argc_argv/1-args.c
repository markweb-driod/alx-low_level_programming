#include <stdio.h>
/**
 * main - THIS PROGRAM PRINTS NUMBER OF ARGUMENTS IN THE CODE
 * @argc: shows number of arguments in codee
 * @argv: shows number argument present in code
 *
 * Return: 1 Success
 */

	int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
