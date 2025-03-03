#include<iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array_one[]={1,2,3,4};
    int array_two[]={1,2,3,4};

    int n=sizeof(array_one)/sizeof(array_one[0]);

    int result=sum_two_arrays(array_one,array_two,n);
    cout<<"sum of array one and two:"<<result<<endl;
}