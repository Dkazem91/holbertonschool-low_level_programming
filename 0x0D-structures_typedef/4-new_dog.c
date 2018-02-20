#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	struct dog *ndog;

	i = 0;
	len1 = 0;
	while (name[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	len2 = 0;
	while (owner[i] != '\0')
	{
		len2++;
		i++;
	}
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc((len1 + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = malloc((len2 + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->owner = owner;


	return (ndog);

}
