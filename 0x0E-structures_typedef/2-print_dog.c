#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - func that prints a struct dog
 * @d: struct name
 * Return: if name is void 0 else d
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s", d->name);
		else
			printf("Name: (nil)");
		printf("\n");
		printf("Age: %f", d->age);
		printf("\n");
		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)");
		printf("\n");
	}
}
