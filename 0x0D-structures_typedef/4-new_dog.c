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
	dog_t *ndog;
	char *a, *b;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	a = malloc((len1 + 1) * sizeof(char));
	if (a == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		a[i] = name[i];
	a[i] = '\0';
	ndog->name = a;
	ndog->age = age;
	b = malloc((len2 + 1) * sizeof(char));
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		b[i] = owner[i];
	b[i] = '\0';
	ndog->owner = b;
	return (ndog);
}
