#include <unistd.h>
#include "holberton.h"
/**
* main - imput
* Return: Always 0 (Success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
