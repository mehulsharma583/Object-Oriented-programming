//Using a for loop, count the number of even numbers between 1 and a number we supply (inclusive).
//Return 0 if the parameter is less than 1.#

#include<iostream>
using namespace std;

int count_evens(int number){

    if (number<1){
        return 0;
    }

    int num=1;
    int count=0;
    for(int i=0;i<number;i++){
        num=num+i;
        if(num%2==0){
            count=count+1;
        }
    }
    return count;
}