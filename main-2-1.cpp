#include<iostream>
using namespace std;

int min_element(int array[], int n);

int main(){
    int array[]={2,3,4,1,5};
    int n=sizeof(array)/sizeof(array[0]);

    int result=min_element(array, n);
    cout<<"minimum element: "<<result<<endl;

    return 0;
}