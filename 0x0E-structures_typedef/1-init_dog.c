#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - The function
 * @d: To access strucr
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: To initialize struct
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
