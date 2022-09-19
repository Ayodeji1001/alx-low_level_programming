#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[i]	= src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
