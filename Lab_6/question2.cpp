#include<iostream>
using namespace std;
class Circle{
    private:
    float r;
    public:
    Circle(float radius ){
        r = radius;
    }
    float area(){
        return (3.14)*r*r;     
    }
    float circumference(){
        return 2*(3.14)*r;
    }
};
int main(){
    float radius = 0.0;
    cout<<"Enter the radius: ";
    cin>>radius;
    Circle c1(radius);
    cout<<"The Area of Circle is : "<<c1.area()<<" square meter"<<endl;
    cout<<"The curcumference of the circle is : "<<c1.circumference()<<" meter"<<endl;
    return 0;
}
