 #include<iostream>
using namespace std;

bool is_ascending(int array[], int n);

int main(){
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(array[0]);

    if (is_ascending(array, n)) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is NOT in ascending order." << endl;
    }

    return 0;
}