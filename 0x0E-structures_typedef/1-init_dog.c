#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes var of type struct dog
 * @d: pointer to dog struct
 * @name: name of init
 * @age: age of init
 * @owner: owner of init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
