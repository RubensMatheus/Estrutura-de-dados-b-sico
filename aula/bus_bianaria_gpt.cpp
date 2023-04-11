#include <iostream>
using namespace std;

int* binary_search(int* arr, int size, int value) {
    int* low = arr;
    int* high = arr + size - 1;
    int* mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (*mid == value) {
            return mid;
        } else if (*mid > value) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return nullptr;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* result = binary_search(arr, size, 5);

    if (result != nullptr) {
        cout << "Element found at index: " << result - arr << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}