#include<iostream>
using namespace std;
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    int a,b,c;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    cout<<"Enter the 3rd number: ";
    cin>>c;
    if(a>=b and a>=c) cout<<a<<" is greater";
    else if (b>=a and b>=c) cout<<b<<" is greater";
    else  cout<<c<<" is greater";
}