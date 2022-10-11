#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Entry Point
 * @d: pointer to struct
 * Return: what does it return?
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
