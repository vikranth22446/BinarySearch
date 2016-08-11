//
// Created by vikranth on 8/10/2016.
//

#ifndef SORTING_PRINT_H
#define SORTING_PRINT_H
#include <iostream>

namespace print {
    using namespace std;

    template<class templateType>
    void printArray(string title, templateType *arrayToSort, const int arraysize) {
        cout << title;
        for (unsigned int j = 0; j < arraysize; ++j) {
            string value = " , ";
            if ((j + 1) == arraysize) {
                value = "";
            }
            cout << *(arrayToSort + j) << value;
        }
        cout << "\n";
    }
}
#endif //SORTING_PRINT_H
