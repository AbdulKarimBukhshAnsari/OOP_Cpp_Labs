#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //Question 10: Check Armstrong Number
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    int original_number;
    cout<<"Enter the number which you want to check: ";
    cin>>original_number;
    int number = original_number;  //to keep original number save 
    // to check how many number exist in the number we simply convert it into str
    string str = to_string(number);
    int number_of_digits =str.length();
    int sum_of_raised_power = 0;
    while(number!=0){
        int last_number = number%10; //it will give us the last number
        number = number /10;  //to remove the last number
        sum_of_raised_power=sum_of_raised_power+pow(last_number,number_of_digits);
        
    }
    if(sum_of_raised_power==original_number) cout<<original_number<<" is an Armstrong number";
    else  cout<<original_number<<" is not an Armstrong number";
} 