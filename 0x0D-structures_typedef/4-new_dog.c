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
	int len1;
	int len2;
	char *a;
	char *b;
	struct dog *ndog;

	while (*name++)
		len1++;
	while (*owner++)
		len2++;
	a = malloc(sizeof(char) * (len1 + 1));
	if (a == NULL)
		return (NULL);
	b = malloc(sizeof(char) * (len2 + 1));
	if (b == NULL)
		return (NULL);
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = a;
	ndog->age = age;
	ndog->owner = b;


	return (ndog);

}
