#include<iostream>
using namespace std;
int main(){
    // Question 11: Sum and Average Calculation of two numbers
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    float number_1 , number_2;
    cout<<"Enter 1st number: ";
    cin>>number_1;
    cout<<"Enter 2nd number: ";
    cin>>number_2;
    float sum = number_1+number_2;
    float avg = sum /2;
    cout<<"The sum of "<<number_1<<" and "<<number_2<<" is found to be "<<sum<<endl;
    cout<<"The average of "<<number_1<<" and "<<number_2<<" is found to be "<<avg<<endl;
}