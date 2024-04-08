#include<iostream>
using namespace std;
int main(){
    // Question 13 : Amount in Rupees Breakdown
    int amount ; 
    cout<<"Enter amount in rupees: ";
    cin>>amount;
    // number of 1000
    int number_1000 = amount /1000;
    amount = amount %1000; // give the remaining value
    // number of 500 
    int number_500 = amount /500;
    amount = amount%500 ;
    //number of 100 
    int number_100 = amount / 100 ;
    amount = amount % 100;
    // number of 50
    int number_50 = amount / 50 ;
    amount = amount % 50;
    // number of 10 
    int number_10 = amount / 10 ;
    amount = amount % 10;
    // number of 5
    int number_5 = amount / 5 ;
    amount = amount % 5; 
    // number of 2 
     int number_2 = amount / 2 ;
    amount = amount % 2;
    // number of 1 s
    int number_1 = amount;
    cout<<"1000s in the in the given amount is "<<number_1000<<endl;
    cout<<"500s in the in the given amount is "<<number_500<<endl;
    cout<<"100s in the in the given amount is "<<number_100<<endl;
    cout<<"50s in the in the given amount is "<<number_50<<endl;
    cout<<"10s in the in the given amount is "<<number_10<<endl;
    cout<<"5s in the in the given amount is "<<number_5<<endl;
    cout<<"2s in the in the given amount is "<<number_2<<endl;
    cout<<"1s in the in the given amount is "<<number_1<<endl;
}