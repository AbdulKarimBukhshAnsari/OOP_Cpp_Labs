#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    
    // Outer loop for rows
    for(int i = 1; i <= rows; ++i) {
        // Inner loop for columns
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << std::endl;
    }
    

}