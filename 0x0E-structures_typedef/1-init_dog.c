#include <stdlib.h>
	#include "dog.h"


	/**
	 * init_dog - do initialize a variable of type struct dog
	 * @d: do pointer to struct dog to initialize
	 * @name: as in name to initialize
	 * @age: as in age to initialize
	 * @owner: as in owner to initialize
	 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
