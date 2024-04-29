// Question 6 : Menu driven calculator
#include<iostream>
using namespace std;
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    cout<<"Welcome to menu driven calculator!!";
    int operation;
    float a,b;
    cout<<"\nEnter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Choose the mathematical operation you want to do."<<endl;
    cout<<"1:Addition \n2:Subtraction \n3:Multiplication \n4:Division"<<endl;
    cin>>operation;
    if(operation==1) cout<<"The Addition of the given number is : "<<a+b;
    else if(operation==2) cout<<"The Subtraction of the given number is : "<<a-b;
    else if(operation==3) cout<<"The Multiplication of the given number is : "<<a*b;
    else cout<<"The Multiplication of the given number is : "<<a/b;

}