//
// Created by vikranth on 8/10/2016.
//

#include "print.h"

template<class templateType>
void selectionSort(templateType *arrayToSort, const int arraysize) {
    for (int i = 0; i < arraysize; ++i) {
        int min = i;
        for (int j = i; j < arraysize; ++j) {
            if (*(arrayToSort + min) > *(arrayToSort + j)) {
                min = j;
            }
        }
        templateType temp = *(arrayToSort + i);
        *(arrayToSort + i) = *(arrayToSort + min);
        *(arrayToSort + min) = temp;
    }
    print::printArray<templateType>("Selection Sort Value are: ", arrayToSort, arraysize);
}
