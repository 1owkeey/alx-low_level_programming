#include <stdlib.h>
	#include "dog.h"


	/**
	 * free_dog - do free memory allocated for a struct dog
	 * @d: as in struct dog to free
	 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
