#include <iostream>
#include "insertionSort.cpp"
#include "selectionSort.cpp"
#include "bubbleSort.cpp"
#include "quickSort.cpp"
#include "binarySearch.cpp"

using namespace std;

const int arraysize = 5;

int main() {
    int insertionSortArray[] = {4, 0, 1, 5, 6};
    insertionSort<int>(insertionSortArray, arraysize);
    selectionSort<int>(insertionSortArray, arraysize);
    bubbleSort(insertionSortArray, arraysize);
    runQuickSort<int>(insertionSortArray, arraysize);
    int binarySort[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = binarySearch<int>(binarySort, 5, sizeof(binarySort) / sizeof(int));
    cout << value << " Binary Search Value" << endl;

    return 0;
}


void mergeSort(int *arrayToSort) {

}
