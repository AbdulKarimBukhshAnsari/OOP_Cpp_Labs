#include<iostream>
using namespace std;
struct Employee{
    int employee_id;
    string name;
    string department;
    int salary;
};
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    Employee employee[5];
    int salaries_sum;
    // Data Entry
    for(int i =0;i<5;i++){
        cout<<"Enter the Employee id of "<<i+1<<" employee: ";
        cin>>employee[i].employee_id;
        cout<<"Enter the name of "<<i+1<<" employee: ";
        cin>>employee[i].name;
        cout<<"Enter the department of "<<i+1<<" employee: ";
        cin>>employee[i].department;
        cout<<"Enter the salary of "<<i+1<<" employee: ";
        cin>>employee[i].salary;
        salaries_sum += employee[i].salary; 
    }
    cout<<"----------------------------"<<endl;
    cout<<"---Detailed Data!!!----------"<<endl;
    cout<<"------------------------------"<<endl;
    // Displaying the Data
    for(int j =0;j<3;j++){
        cout<<"Employee "<<j+1<<endl;
        cout<<"Employee id: "<<employee[j].employee_id<<endl;
        cout<<"Name: "<<employee[j].name<<endl;
        cout<<"age: "<<employee[j].department<<endl;
        cout<<"Marks: "<<employee[j].salary<<endl;
        cout<<"\n\n";
        cout<<"-----------------------------------"<<endl;
    }
    cout<<"\n\n";
    cout<<"The average salary is found to be: $"<<salaries_sum/5.0;


}