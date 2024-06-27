#include <iostream>
using namespace std;
class Employee {
public:
    virtual double calculateSalary() const = 0;
};
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double bonus;
public:
    PermanentEmployee(double basic, double bon) : basicSalary(basic), bonus(bon) {}
    double calculateSalary() const override {
        double grossSalary = basicSalary + bonus;
        double deduction = 0.0;
        if (grossSalary < 100000) {
            deduction = grossSalary * 0.02;
        } else if (grossSalary < 300000) {
            deduction = grossSalary * 0.05;
        } else {
            deduction = grossSalary * 0.10;
        }

        return grossSalary - deduction;
    }
};
class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    ContractEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
    double calculateSalary() const override {
        double grossSalary = hourlyRate * hoursWorked;
        double deduction = 200.0;
        return grossSalary - deduction;
    }
};
int main() {
    double basicSalary, bonus;
    cout << "Enter the basic salary and bonus of the permanent employee: ";
    cin >> basicSalary >> bonus;
    PermanentEmployee permEmp(basicSalary, bonus);
    double hourlyRate;
    int hoursWorked;
    cout << "Enter the hourly rate and hours worked of the contract employee: ";
    cin >> hourlyRate >> hoursWorked;
    ContractEmployee contractEmp(hourlyRate, hoursWorked);
    cout << "The salary of the permanent employee is: " << permEmp.calculateSalary() << endl;
    cout << "The salary of the contract employee is: " << contractEmp.calculateSalary() << endl;
    return 0;
}
