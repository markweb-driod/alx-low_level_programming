#include <stdio.h>
#include <stdlib.h>
/**
 * main - A PROGRAM THAT PRINTS ITS NAME FOLLOWED BY A NEW LINE IN C
 * @argc: describes argument count
 * @argv: describes contents
 * Return: 1 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
