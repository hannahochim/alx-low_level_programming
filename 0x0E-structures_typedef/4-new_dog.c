#include "dog.h"
#include <stdlib.h>i

/**
 * new_dog - create new dog
 * @name: pointer to a char
 * @age: dog's age
 * @owner: pointer to a char for owner
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nL, oL, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	nL = oL = 0;
	while (name[nL++])
		;
	while (owner[oL++])
		;
	d1->name = malloc(nL * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= nL; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(oL * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= oL; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
