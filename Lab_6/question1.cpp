#include<iostream>
using namespace std;
class Rectangle{
    private:
    int w ;
    int h;
    public:
    Rectangle(int width , int height ){
        w = width;
        h = height;
    }
    int area(){
        return w*h ;     
    }
    int perimeter(){
        return (2*w)+(2*h);
    }
};

int main(){
    int width = 0 , height = 0;
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"Enter the height: ";
    cin>>height;
    Rectangle r1(width,height);
    cout<<"The Area of reactangle is : "<<r1.area()<<" square meter"<<endl;
    cout<<"The Perimeter of the rectangle is : "<<r1.perimeter()<<" meter"<<endl;
    return 0;



}