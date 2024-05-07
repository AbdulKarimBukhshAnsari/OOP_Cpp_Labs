#include <iostream>
using namespace std;

    int* findMax(int arr[], int size) {        
        int *maxPtr = arr; 
        
        for (int *ptr = arr + 1; ptr < arr + size; ptr++) {
            if (*ptr > *maxPtr) {
                maxPtr = ptr; 
            }
        }
        
        return maxPtr;
    }
int main() {
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n\n";
    int arr[] = {5, 2, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *maxPtr = findMax(arr, size);

    cout<<"Maximum element in the pointer is: "<<*maxPtr;
}
