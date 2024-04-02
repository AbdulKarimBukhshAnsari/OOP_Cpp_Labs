#include<iostream>
using namespace std;
int main(){
    //This program is written to find the area of a rectangle
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number: SE-23052"<<"\n\n";
    int length,width,area_of_rectangle;   
    cout<<"Enter the length of the rectangle: ";  //in meter
    cin>>length;
    cout<<"Enter the height of the rectangle: ";  //in meter
    cin>>width;
    area_of_rectangle = length*width;
    cout<<"The area of rectangle is found to be "<<area_of_rectangle<<" meter";
    
}