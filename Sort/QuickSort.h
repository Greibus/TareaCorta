//
// Created by tony on 10/03/18.
//

#ifndef TAREACORTA_QUICKSORT_H
#define TAREACORTA_QUICKSORT_H


#include "../PagedArray/PagedArray.h"

class QuickSort {
private:
    int divide(int *array,int start, int end);
    int divide(PagedArray *array,int start, int end);

public:
    void quicksort(int *array, int start, int end);
    void quicksort(PagedArray *array, int start, int end);

};




#endif //TAREACORTA_QUICKSORT_H
