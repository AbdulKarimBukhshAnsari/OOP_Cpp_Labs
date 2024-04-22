//Question 3 :Write a program to check the strength of a password.
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    bool check_upper =false;
    bool check_lower =false;
    bool check_digit =false;
    bool check_special =false;
    string password;
    cout<<"Enter your password: ";
    cin>>password;
    if (password.length()>=8){
    for(int i = 0 ; i<password.length();i++){
        if(islower(password[i])== 2) check_lower = true;
        else if(isupper(password[i])== 1) check_upper = true;
        else if(isdigit(password[i])== 1) check_digit = true;
        else check_special = true;
    }
    if(check_lower==true and check_upper == true and check_digit == true and check_special==true) cout<<"Password is strong";
    else cout<<"Password is week.";        
    }
    else cout<<"Password is week.";

}   