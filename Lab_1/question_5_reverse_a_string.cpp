#include<iostream>
using namespace std;
int main(){
    //Question 5 : Reverse the given string
    string str ;  // initializing the variable
    cout<<"Enter the string: ";
    cin>>str;
    string reverse_string = "";  
    for(int i =0;i<str.length();i++){  //initializing the for loop
        reverse_string =reverse_string + str[str.length()-(i+1)];
    }
    
    cout<<"The reverse string of '"<<str<<"' is '"<<reverse_string<<"'";
}   