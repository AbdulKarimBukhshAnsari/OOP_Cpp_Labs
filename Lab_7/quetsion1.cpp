#include<iostream>
using namespace std;
class Vehicle{
    public:
    void move(){
        cout<<"Vehicle is moving";
    }
};
class Car:public Vehicle{
    public:
    void move(){
        cout<<"Car is moving ";
    }
};

int main(){
    Car c;
    c.move();
}












