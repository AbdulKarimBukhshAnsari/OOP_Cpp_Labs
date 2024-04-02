#include<iostream>
using namespace std;
int main(){
    //This program is written to find whether the number is even or odd
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll number: SE-23052\n";
    int number;
    cout<<"Enter the number which you want to check:";
    cin>>number;
    if(number%2==0) cout<<number<<" is even";
    else cout<<number<<" is odd";   
}