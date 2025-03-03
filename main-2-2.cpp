#include<iostream>
using namespace std;

int max_element(int array[], int n);

int main(){
    int array[]={2,3,4,5,1};
    int n=sizeof(array)/sizeof(array[0]);

    int result=max_element(array, n);
    cout<<"maximum element: "<<result<<endl;

    return 0;
}