#include<iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n){
    if(n<1){
        return 0;
    }

    int sum_one=0;

    for(int i=0;i<n;i++){
        sum_one=sum_one+array[i];
    }
    int sum_two=0;
    for(int i=0;i<n;i++){
        sum_two=sum_two+secondarray[i];
    }
    int total_sum=sum_one+sum_two;
    
    return total_sum;
}