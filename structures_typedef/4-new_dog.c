#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, j, i;
	dog_t *d1;

	a = j = 0;
	while (name[a++])
		;
	while (owner[j++])
		;
	d1 = malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);

	d1->name = malloc(j * sizeof(d1->name));
	if (d1 == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		d1->name[i] = name[i];

	d1->age = age;

	d1->owner = malloc(j * sizeof(d1->owner));
	if (d1 == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
