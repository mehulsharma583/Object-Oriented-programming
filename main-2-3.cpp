#include<iostream>
using namespace std;

void two_five_nine(int array[], int n);

int main(){
    int array[]={1,2,2,2,3,4,5,5,5,5,5,6,8,9,9};
    int n=sizeof(array)/sizeof(array[0]);

    two_five_nine(array,n);

    return 0;
}

