//
// Created by vikranth on 8/12/2016.
//


#include "print.h"

using namespace std;

template<class type>
void quickSort(type arrayToSort[], int left, int right);

template<class type>
void runQuickSort(type *arrayToSort, const int size) {
    quickSort(arrayToSort, 0, size - 1);
    print::printArray("The Values of Quick Sort are ", arrayToSort, size);

}

template<class type>
void quickSort(type arrayToSort[], int left, int right) {
    if (left == right) {
        return;
    }
    type pivot = *(arrayToSort + right);
    int wall = left;
    for (int i = left; i <= right; ++i) {
        type element = *(arrayToSort + i);
        if (wall == right) {
            return;
        }
        if (i == right) {
            type temp = *(arrayToSort + wall);
            *(arrayToSort + wall) = pivot;
            *(arrayToSort + right) = temp;
            wall++;
            quickSort(arrayToSort, left, wall - 1);
            quickSort(arrayToSort, wall, right);
        }
        if (element <= pivot) {
            type temp = *(arrayToSort + i);
            type wallValue = *(arrayToSort + wall);
            if (temp > wallValue) {
                return;
            }
            *(arrayToSort + i) = wallValue;
            *(arrayToSort + wall) = temp;
            wall++;
        }

    }


}
