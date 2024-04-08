#include<iostream>
using namespace std;
int main(){
    //Question 6 : Check whether the number is prime 
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    int number;
    cout<<"Enter the number which you want to check: ";
    cin>>number;
    bool check = false;
    for(int i = 2;i<number;i++){
        if(number%i==0) check = true; 
    }
    if(check==true) cout<<number<<" is not a prime";
    else cout<<number<<" is a prime number";
}