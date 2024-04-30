#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop for spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Inner loop for ascending numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Inner loop for descending numbers
        for (int j = 2; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

}