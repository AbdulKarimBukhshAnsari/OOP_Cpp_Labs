#include<iostream>
using namespace std;
class Employee{
    private:
    int S;
    string N;
    public:
    Employee(string name,int salary){
        N = name;
        S = salary;        
    }
    void detail(){
        cout<<"Employee name is: "<<N<<endl;
        cout<<"Employee Salary is: $"<<S<<endl;
    }
};
int main(){
    int salary;
    string name;
    cout<<"Enter the name of the Employee: ";
    cin>>name;
    cout<<"Enter the slary of the employee: $";
    cin>>salary;
    Employee e1(name,salary);
    e1.detail();
    return 0;
}