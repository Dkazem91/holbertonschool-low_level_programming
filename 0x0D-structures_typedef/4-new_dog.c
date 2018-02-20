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

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc((len1 + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		ndog->name[i] = name[i];
	ndog->name[i + 1] = '\0';
	ndog->age = age;
	ndog->owner = malloc((len2 + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i + 1] = '\0';
	return (ndog);
}
