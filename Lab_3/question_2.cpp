// Question 2 : Area of Rectangle
#include<iostream>
using namespace std;
struct Rectangle{
    float length;
    float width;
};
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Rectangle rectangle;
    cout<<"Enter the length of the rectangle: ";
    cin>>rectangle.length;
    cout<<"Enter the width of the rectangle: ";
    cin>>rectangle.width;
    float area = rectangle.length * rectangle.width;
    cout<<"The area of the rectangle is found to be: "<<area<<" Square meter";
}