#include <stdio.h>
#include "main.h"
/**
* A function that prints the alphabeth
* in lowercase, followed by a new line
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}