#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string name, int age){
        this-> name = name;
        this-> age = age;

    }
   
};
class Student :public Person{
    private:
    int studentID;
    public:
    Student(string name,int age,int studentID):Person(name,age){
        this->studentID = studentID;
        cout<<"The Derived class constructor has been executed";
    }
    
};

int main(){
    Student s("Karim",16,23000);
}

