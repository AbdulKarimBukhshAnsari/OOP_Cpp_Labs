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
    if (size_col!=size_row){
        cout<<"Given matrix is not Symmetric."<<endl;
        return 0;
    }
    for(int i = 0;i<size_row;i++){
        for(int j =0 ;j<size_col ;j++){
            if(arr[i][j]!=arr[j][i]) {
                cout<<"Given matrix is not Symmetric."<<endl;
                return 0;
            }
        }
    }
    cout<<"Given matrix is Symmetric "<<endl;
    return 0;
}

    