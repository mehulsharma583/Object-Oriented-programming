#include<iostream>
using namespace std;

int count_evens(int number);

int main(){
    int number;
    cout<<"enter any number"<<endl;
    cin>>number;

    int result=count_evens(number);
    cout<<"count of even numbers: "<<result<<endl;

    return 0;
}