#include<iostream>
using namespace std;
int main(){
    // Question 14 : Farenheit to Celsius
    float faren;
    cout<<"Enter the temperature in farenheit: ";
    cin>>faren;
    float celsius = (faren-32)*(5.0/9);
    cout<<"Celsius temperature "<<celsius;
}