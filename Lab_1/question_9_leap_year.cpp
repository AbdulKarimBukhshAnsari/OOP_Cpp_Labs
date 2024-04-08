#include<iostream>
using namespace std;
int main(){
    // Question 9:  Check Leap Year: Write a C++ program to check if a given year is a leap year or not
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    int year;
    cout<<"Enter the year which you want to check: ";
    cin>>year;
    bool leap_year = false;
    if(year%4==0){            
        if(year%100==0){      // after checking the above condition it will check wheter the number is divisible by 100 or not
            // if it is divisible by 100 it must be divisible with 400        
            if(year%400==0) leap_year = true;
        }
        else leap_year = true;

    }
    if(leap_year==true) cout<<year<< " is a leap year";
    else cout<<year<<" is not a leap year";
}