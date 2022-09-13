#include "main.h"
/**
* _islower - Checks if a character is lowercase
* Return: 1 if character is lowercase, 0 otherwise.
*/
void print_alphabet_x10(void)
{
int count = 0;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
