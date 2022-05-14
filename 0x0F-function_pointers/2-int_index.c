#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches the array for matching values depending on the function
 * @array: The array being passed in
 * @size: The number of indexes in the array
 * @cmp: The pointer to a function
 *
 * Return: The index of the first match. -1 if invalid size or no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return (-1);

}
