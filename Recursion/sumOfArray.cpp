#include<iostream>
using namespace std;

int arraySum (int *arr, int size){
    if (size == 1) return arr[0];
    else return ( arr[0] + arraySum( arr+1, size-1 ) );
}
int main (){

    int arr[5];
    for (int i=0; i<5; i++){
        cin >> arr[i];
    }

    cout << "The Sum is " << arraySum(arr, 5) << endl ;
    return 0;
}
