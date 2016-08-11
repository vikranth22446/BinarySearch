#include <iostream>
#include "insertionSort.cpp"
#include "selectionSort.cpp"
#include "bubbleSort.cpp"

using namespace std;

const int arraysize = 5;

template <class type>
int binarySearch(type *arrayToSort, const type valueToSearch, const int arraysize);

int main() {
    int insertionSortArray[] = {4, 0, 5, 6, 1};
    insertionSort<int>(insertionSortArray, arraysize);
    selectionSort<int>(insertionSortArray, arraysize);
    bubbleSort(insertionSortArray, arraysize);
    int binarySort[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = binarySearch<int>(binarySort, 5, sizeof(binarySort)/ sizeof(int));
    cout << value << " Binary Search Value" << endl;
    return 0;
}


void quickSort(int *arrayToSort) {

}

void mergeSort(int *arrayToSort) {

}
template <class type>
bool inorder(type *arrayToSort, const int arraysize) {
    for (int i = 0; i < arraysize; ++i) {
        if ((i + 1) != arraysize && *(arrayToSort + i) > *(arrayToSort + i + 1)) {
            return false;
        }
    }
    return true;
}

template <class type>
int binarySearch(type *arrayToSort, const type valueToSearch, const int arraysize) {
    if (!inorder<type>(arrayToSort, arraysize)) { return -1; }
    int low = 0;
    int high = arraysize - 1;
    while (true) {
        int mid = (low + high) / 2;
        cout << mid << endl;
        if (*(arrayToSort + mid) == valueToSearch) {
            return mid;
        } else if (*(arrayToSort + mid) > valueToSearch) {
            high = mid - 1;
        } else if (*(arrayToSort + mid) < valueToSearch) {
            low = mid + 1;
        } else if (high == low) {
            return -1;
        }
    }
}