#include "main.h"
#include <stdlib.h>
/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(min * max);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (min * max); i++)
	{
		a[i] = 0;
	}
	return (a);
}
