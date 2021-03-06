#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @size: the number of elements in the array
 * @array: the given array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0
 * if no elements matches, return -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++) /* iterate through the array */
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
