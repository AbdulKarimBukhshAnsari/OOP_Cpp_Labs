// Question 1 : Initialize the structure
#include<iostream>
using namespace std;
struct Person{
    string name ;
    int age ;
};
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Person person_1 ;
    person_1.name = "Karim";
    person_1.age = 19;
    cout<<person_1.name<<endl;
    cout<<person_1.age<<endl;
}