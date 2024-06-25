#include<iostream>
using namespace std;
void max_element(int arr[100][100],int rows, int cols){
    int result[100] = {0}; // avoiding dynmaic array 
    for(int i = 0 ;i<rows;i++){
        int max_ele = 0;
        for(int j = 0 ; j<rows;j++){
            max_ele = max(max_ele,arr[i][j]);
        }
        result[i] = max_ele;
    }
    for(int i = 0 ; i<rows;i++){
        cout<<i+1<<" row max element: "<<result[i]<<endl;
    }
}
int main(){
    int size_row = 0 , size_col= 0;
    cout<<"Enter the number of rows: ";
    cin>>size_row;
    cout<<"Enter the number of columns: ";
    cin>>size_col;
    cout<<"Enter the elements for your array: "<<endl;
    int arr[100][100]; // making the array at least 100 rows and column to abvoid dynamic memory alllocation
    for(int i = 0;i<size_row;i++){
        for(int j =0 ;j<size_col ;j++){
            cin>>arr[i][j];
        }
    }
    max_element(arr,size_row,size_col);
}