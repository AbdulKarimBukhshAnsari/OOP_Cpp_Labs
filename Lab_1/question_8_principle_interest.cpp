#include<iostream>
using namespace std;
int main(){
    //Question 9: Calculate the simple interest
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    float principal_amount , rate_of_interest , time_period;
    cout<<"Enter the principal_amount $: ";
    cin>>principal_amount;
    cout<<"Enter the rate of interest: ";
    cin>>rate_of_interest;
    cout<<"Enter the time period: ";
    cin>>time_period;
    float simple_interest = (principal_amount*rate_of_interest*time_period)/100;
    cout<<"The simple interest is found to be $"<<simple_interest;

}