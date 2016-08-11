//
// Created by vikranth on 8/10/2016.
//


#include "print.h"
template<class templateType>
void bubbleSort(templateType *arrayToSort, const int arraysize) {
    bool change = false;
    for (int i = 0;; ++i) {
        if ((i + 1) == arraysize) {
            i = 0;
            if (!change) { break; }
            change = false;
        }
        if (*(arrayToSort + i) > *(arrayToSort + i + 1)) {
            templateType temp = *(arrayToSort + i);
            *(arrayToSort + i) = *(arrayToSort + i + 1);
            *(arrayToSort + i + 1) = temp;
            change = true;
        }
    }
    print::printArray<templateType>("The Bubble Sort Values are ", arrayToSort, arraysize);
}
