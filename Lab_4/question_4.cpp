#include <iostream>
using namespace std;
    int* removeDuplicates(int arr[], int& size) {
        int *current = arr + 1; 
        int *tail = arr; 
        while (current != arr + size) {
            int *check = arr;
            bool isDuplicate = false;
            while (check != current) {
                if (*check == *current) {
                    isDuplicate = true;
                    break;
                }
                check++;
            }
            if (!isDuplicate) {
                *(++tail) = *current;
            }
            current++; 
        }
        size = tail - arr + 1;

        return tail;
    }
int main() {
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n\n";
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int *newEnd = removeDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int *ptr = arr; ptr <= newEnd; ptr++) {
        cout << *ptr << " ";
    }
    
}
