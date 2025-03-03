#include<iostream>
using namespace std;

int array_sum(int array[], int n);

int main(){
    int arr[]={1, 2, 3 , 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int result = array_sum(arr, n);
    cout<<"the sum of all array: "<<result<<endl;

    return 0;
}