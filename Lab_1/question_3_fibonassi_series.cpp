#include<iostream>
using namespace std;
int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    int i = 0;  //initializing the starting two values
    int j = 1;
    int end;
    cout<<"Enter the value of number of terms: ";
    cin>>end;
    for (int number= 0 ;number<end;number++){
        int num = i+j;  // as we know that the value is the sum of last two values
        if(number==0) cout<<i<<" "; // because we want to start the series with zero
        cout<<num<<" ";
        i=j; 
        j = num;
    }

}