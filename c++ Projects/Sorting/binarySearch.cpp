//
// Created by vikranth on 8/12/2016.
//

template<class type>
bool inorder(type *arrayToSort, const int arraysize) {
    for (int i = 0; i < arraysize; ++i) {
        if ((i + 1) != arraysize && *(arrayToSort + i) > *(arrayToSort + i + 1)) {
            return false;
        }
    }
    return true;
}

template<class type>
int binarySearch(type *arrayToSort, const type valueToSearch, const int arraysize) {
    if (!inorder<type>(arrayToSort, arraysize)) { return -1; }
    int low = 0;
    int high = arraysize - 1;
    while (true) {
        int mid = (low + high) / 2;
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