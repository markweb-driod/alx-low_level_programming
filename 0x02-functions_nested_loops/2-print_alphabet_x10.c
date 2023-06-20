#include <stdio.h>
/**
 * main - This code prints a-z 10 times
 * Return: Always 1 (Success)
 */

void printAlphabetTenTimes() {
	    int i;
	        char letter;
		    
		    for (i = 0; i < 10; i++) {
			            for (letter = 'a'; letter <= 'z'; letter++) {
					                _putchar(letter);
							        }
				        }
		        
		        _putchar('\n');
}

int main() {
	    printAlphabetTenTimes();
	        
	        return 0;
}
