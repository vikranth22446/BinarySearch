#include <vector>
#include "print.h"

using namespace std;

template<class templateType>
void insertionSort(templateType *array, const int arraysize) {
    vector<templateType> myVector;
    myVector.push_back(array[0]);
    for (int i = 1; i < arraysize; i++) {
        templateType valueToPush = *(array + i);
        int vectorValue = myVector.size();
        bool inserted = false;
        for (int j = vectorValue - 1; j >= 0; j--) {
            if (valueToPush > myVector[j]) {
                myVector.insert(myVector.begin() + j + 1, valueToPush);
                inserted = true;
                break;
            }
        }
        if (!inserted)myVector.insert(myVector.begin(), valueToPush);

    }
    print::printArray("Insertion Sort Values are ", &myVector[0], arraysize);
}
