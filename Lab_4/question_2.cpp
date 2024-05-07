#include <iostream>
using namespace std;
    // defining the function
    void reverseArray(int arr[], int size) {
        int *start = arr;
        int *end = arr + size - 1;
        while (start < end) {
            // Swap elements pointed by start and end
            int temp = *start;
            *start = *end;
            *end = temp;
            // Move pointers to the next pair of elements
            start++;
            end--;
        }
    }


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Print original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Reverse the array
    reverseArray(arr, size);
    // Print reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}