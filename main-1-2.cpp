#include<iostream>
using namespace std;

double array_mean(int array[], int n);

int main(){
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(array[0]);

    double result=array_mean(array, n);
    cout<<"average of array elements:"<<result<<endl;
}
