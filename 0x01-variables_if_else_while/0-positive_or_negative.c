#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - This file creates random int
* Return: Always 1 (Success)
* betty style doc for function main goes there
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
	printf(" is positive");
	if (n <= 0)
		printf(" is negative");

return (0);
}
