#include<iostream>
using namespace std;
int main(){
    // Question 7 : Calculate the factorial of the number
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n";
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact = 1;
    for(int i =1;i<=n;i++){
        fact =fact *i;
    }
    cout<<"The factorial of the number "<<n<<" is found to be "<<fact;
}