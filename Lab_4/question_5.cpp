#include <iostream>
#include <string>
using namespace std;
    bool isPalindrome(const string& str) {
        if (str.empty())
            return true; // An empty string is considered a palindrome       
        const char *start = &str[0]; 
        const char *end = &str[str.length() - 1];         
        while (start < end) {
            if (*start != *end)
                return false;    
            start++;
            end--;
        }       
        return true; 
    }
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (isPalindrome(input) == true) cout<<input<<" is a palindrome";
    else cout<<input<<" is not a palindrome";
}