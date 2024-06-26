#include<iostream>
using namespace std;
class Shape{
    public:
    void draw(){
        cout<<"Drawing Shape";
    }
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};
class Square:public Shape{
    public:
    void draw(){
        cout<<"Drawing Square";
    }
};
int main(){
    Circle *c;
    Square *s;
    c->draw();
    s->draw();

}






