#include<iostream>
using namespace std;
// main function 
int main(){
    int size_row = 0 , size_col= 0;
    cout<<"Enter the number of rows: ";
    cin>>size_row;
    cout<<"Enter the number of columns: ";
    cin>>size_col;
    cout<<"Enter the elements for your array: "<<endl;
    int arr[size_row][size_col];
    for(int i = 0;i<size_row;i++){
        for(int j =0 ;j<size_col ;j++){
            cin>>arr[i][j];
        }
    }
    int sum_arr = 0;
    for(int i = 0;i<size_row;i++){
        for(int j =0 ;j<size_col ;j++){
            sum_arr+=arr[i][j];
        }
    }
    cout<<"The sum is: "<<sum_arr;

}