#include "main.h"
/**
 * array_range - functions that creates an array of intergers
 * @min: minimum value
 * @max: maximum value
 *
 * return: pointer to the created array
 * if man > max, returns NULL
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min < max; i++, min++)
		ar[i] = min;
	return (ar);
	}
