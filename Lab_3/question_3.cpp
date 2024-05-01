// Question 3 : Swapping the number 
#include<iostream>
using namespace std;

struct Number{
    int a;
    int b;
};
void swapp(int &a,int &b){
    int temp = a;
    a = b;
    b=temp;
}
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Number num;
    cout<<"Enter 1st number: ";
    cin>>num.a;
    cout<<"Enter 2nd number: ";
    cin>>num.b;
    cout<<"Number before swapping are "<<num.a<<" and "<<num.b<<endl;
    swapp(num.a,num.b);
    cout<<"Number after swapping are "<<num.a<<" and "<<num.b;
}

