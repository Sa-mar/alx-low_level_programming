#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - The function
 * @d: value
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: a program that initializ struct
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
