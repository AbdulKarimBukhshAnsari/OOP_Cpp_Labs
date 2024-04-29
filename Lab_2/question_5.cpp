// Question 5 : Generate the table 
#include<iostream>
using namespace std;
void table(int n){
    for(int i =1 ; i<=10 ; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

}


int main(){
    cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number : SE-23052\n";
    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    table(n);
}