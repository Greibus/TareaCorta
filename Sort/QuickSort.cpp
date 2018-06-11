//
// Created by tony on 10/03/18.
//

#include "QuickSort.h"
#include "../PagedArray/PagedArray.h"


void QuickSort::quicksort(PagedArray *array, int start, int end) {
    int pivot;

    if (start < end) {
        pivot = divide(array, start, end);

        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);

        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
}

int QuickSort::divide(PagedArray *array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;

    pivot = (*array)[start];
    left = start;
    right = end;

    // Mientras no se cruzen los índices
    while (left < right) {
        while ((*array)[right] > pivot) {
            right--;
        }

        while ((left < right) && ((*array)[left] <= pivot)) {
            left++;
        }

        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = (*array)[left];
            (*array)[left] = (*array)[right];
            (*array)[right] = temp;
        }
    }

    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = (*array)[right];
    (*array)[right] = (*array)[start];
    (*array)[start] = temp;

    // La nueva posición del pivot
    return right;
}