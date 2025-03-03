#include<iostream>
using namespace std;

int num_count(int array[], int n, int number);

int main(){
    int arr[]={1, 2, 1, 4, 5, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    int result = num_count(arr, n, number);

    cout<<"count of number: "<<result<<endl;

    return 0;
}