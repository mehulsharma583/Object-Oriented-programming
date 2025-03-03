//2-1. Write a function that given an array of integers and its length, will find the minimum (smallest) number and return it.
//The function should return 0 if the size parameter, n, is less than 1.

//Signature: int min_element(int array[], int n)

#include<iostream>
using namespace std;
int min_element(int array[], int n){
    if(n<1){
        return 0;
    }

    int minimum_element=array[0];
    for(int i=1;i<n;i++){
        if(array[i]<=minimum_element){
            minimum_element=array[i];
        }
    }
    return minimum_element;
}