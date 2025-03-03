#include<iostream>
using namespace std;

bool is_descending(int array[], int n);

int main(){
    int array[]={5, 4, 3, 2, 1};
    int n=sizeof(array)/sizeof(array[0]);

    if (is_descending(array, n)) {
        cout << "The array is in descending order." << endl;
    } else {
        cout << "The array is NOT in descending order." << endl;
    }
    return 0;
}