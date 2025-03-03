// Write a function that returns the average of all elements in an integer array.
// The function takes as parameters the array and the number of elements in the array.
// Your function should return 0.0 if the size parameter, n, is less than 1.

// Hint: What's the difference between an integer and a double?
// You might need to look up how to cast a variable from one data type to another.
//double array_mean(int array[], int n)

#include<iostream>
using namespace std;
double array_mean(int array[], int n){
    if(n<1){
        return 0;
    }

    int sum=0;
    for(int i;i<n;i++){
        sum=sum+array[i];
    }

    double new_sum=sum;
    double avg=new_sum/n;

    return avg;    
}