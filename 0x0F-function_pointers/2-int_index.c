#include <stdio.h>
#include "function_pointers.h"



/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: function to compare and return match if it exists
 * Return: index of first match or -1 if not match or fail
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
