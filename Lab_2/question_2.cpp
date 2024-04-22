//Question 2 : Write a program to calculate the monthly telephone bills as per the rules
#include<iostream>
using namespace std;

int bill(int calls){ 
    //taking the number of calls and return the bill
    if(calls<=100) return 200;
    else if (calls>100 and calls<=150) return 200+(calls-100)*0.6;
    else if (calls >150 and calls <=200) return 200+(50)*0.6+(calls-150)*0.5;
    else return 200+(50)*0.6+(50)*0.5+(calls-200)*0.4; 
}
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    int calls;
    cout<<"Enter the number of calls: ";
    cin>>calls;
    cout<<"The bill of "<<calls<<" calls is found to be : $"<<bill(calls);    
}