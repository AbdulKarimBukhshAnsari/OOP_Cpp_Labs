#include<iostream>
using namespace std;
void swap(int* a,int* b){ //it will store the address the of the 'x' and 'y' respectively.
  int temp = *a; //it will fetch the result of pointed address.   
  *a = *b; //swaping the value.
  *b = temp;
    
}
int main(){
  cout<<"Name: Abdul Karim Bukhsh Ansari \nRoll Number :SE-23052\n\n";
  int x = 14; //declaring the values.
  int y = 12;
  cout<<"The values before swapping are: ";
  cout<<x<<" "<<y<<endl; //printing the values before swapping.
  swap(&x,&y);
  cout<<"The values after swapping are: ";
  cout<<x<<" "<<y<<endl;//printing the values after the swapping
}