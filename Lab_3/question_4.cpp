#include<iostream>
#include<algorithm>
using namespace std;
struct Student{
    int roll_number;
    string name;
    int age;
    int marks;
};
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Student student[3];
    int marks[3];
    // Data Entry
    for(int i =0;i<3;i++){
        cout<<"Enter the roll number of "<<i+1<<" student: ";
        cin>>student[i].roll_number;
        cout<<"Enter the name of "<<i+1<<" student: ";
        cin>>student[i].name;
        cout<<"Enter the age of "<<i+1<<" student: ";
        cin>>student[i].age;
        cout<<"Enter the marks of "<<i+1<<" student: ";
        cin>>student[i].marks;
        marks[i] =student[i].marks; 
    }
    cout<<"----------------------------"<<endl;
    cout<<"---Detailed Data!!!----------"<<endl;
    cout<<"------------------------------"<<endl;
    // Displaying the Data
    for(int j =0;j<3;j++){
        cout<<"Student "<<j+1<<endl;
        cout<<"Roll Number: "<<student[j].roll_number<<endl;
        cout<<"Name: "<<student[j].name<<endl;
        cout<<"age: "<<student[j].age<<endl;
        cout<<"Marks: "<<student[j].marks<<endl;
        cout<<"\n\n";
        cout<<"-----------------------------------"<<endl;
    }
    int* max_marks_address = max_element(marks,marks+3); // find the max element address
    int max_marks = *max_marks_address; // find the max marks
    int* result = find(begin(marks),end(marks),max_marks); 
    int index = distance(begin(marks),result);
    cout<<"The highest marks have been gotten by "<<student[index].name<<" Which is: "<<max_marks;

}