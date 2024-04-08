#include<iostream>
using namespace std;
int main(){
    //Question 15 : Reverse the given number
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    int n , remainder,reversed_number=0;
    cout<<"Enter the integer which you want to inverse: ";
    cin>>n;
    while(n!=0){
        remainder = n % 10;  //etting the last number
        reversed_number = reversed_number*10+remainder; // substituting the last number at the start
        n= n/10; // removing the last number 
    }
    cout<<"Reverse of this value "<<reversed_number;

}