#include "function.pointers.h"
/**
 * int_index - sesrches for an interger 
 * @array: input array integer
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * to compare values
 *
 * Return: index of the first element for ewhict the cmp
 * function does not return 0. if no elements matches,
 * return -1. if size <= 0, return -1.
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array &&cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
