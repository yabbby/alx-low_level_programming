#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: int
 */
int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int step = sqrt(size);
    int blockStart = 0;

    while (blockStart < size && array[blockStart] <= value) {
        printf("Value checked array[%d] = [%d]\n", blockStart, array[blockStart]);
        blockStart += step;
    }

    blockStart -= step;

    while (blockStart < size && array[blockStart] <= value) {
        printf("Value checked array[%d] = [%d]\n", blockStart, array[blockStart]);
        if (array[blockStart] == value) {
            return blockStart;
        }
        blockStart++;
    }

    return -1;
}
