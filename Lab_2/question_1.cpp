//Question 1 : Find the character by using the ACII value
#include<iostream>
using namespace std ;
void check_character(int ascii){
    if(ascii>=97 and ascii<=122) cout<<(char)ascii<<" is a small case letter."; // checking the conditions
    else if(ascii>=65 and ascii<=90) cout<<(char)ascii<<" is a capital letter.";
    else if(ascii>=48 and ascii<=57) cout<<(char)ascii<<" is a digit.";
    else cout<<(char)ascii<<" is a special character.";
}
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    char character;
    cout<<"Enter the character: ";
    cin>>character;
    int ascii = (int)character;
    check_character(ascii);
}