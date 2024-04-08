#include<iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter the time in seconds: ";
    cin>>time;
    //for hour
    int hour = time / 3600;
    //remove the hour time
    time = time % 3600 ;
    //for minutes
    int mint = time /60;
    //remove the minute time
    time = time % 60 ;
    // for second
    int sec = time; // reamining time would be the second time 
    cout<<"Hours in time is "<<hour<<endl;
    cout<<"Minutes in time is "<<mint<<endl;
    cout<<"Seconds in time is "<<sec<<endl;
}    