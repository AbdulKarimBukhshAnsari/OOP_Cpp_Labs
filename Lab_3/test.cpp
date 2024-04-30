#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,78};
    int target = 78;
    int* result = find(begin(arr),end(arr),target);
    int index = distance(begin(arr),result);
    cout<<index;
}