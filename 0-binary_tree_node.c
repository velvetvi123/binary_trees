#include "search_algos.h"

/**

linear_search - Uses Linear search algorithm to find a value in an array of integers.

@array: Pointer to the first element of the array to search.

@size: Number of elements in the array.

@value: Value to search for.

Return: The index of the first occurrence of ‘value’ in ‘array’, or -1 if ‘value’ is not found or ‘array’ is NULL.

    Prints each element compared with ‘value’ during searching process. */
Copy
int linear_search(int *array, size_t size, int value)

{

size_t i; // Loop variable



for (i = 0; array && i < size; ++i) // Iterate over each element in the array

{

    printf("Value checked array[%lu] = [%d]\n", i, array[i]); // Print out what values are being checked

    if (array[i] == value) // Check if value of each current item is same as “value”

        return (i); // Give back index where “value” was located

}



return (-1); // If no match found then change it to -1
Copy
}
