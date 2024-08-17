#include<iostream>
using namespace std;
void bubbleSort ( int arr[], int i, int size){

    if ( size == 0 ) return ;
    if ( i >= size ) {
        i =0;
        size--;
    }
    if ( arr[i] > arr[i+1]) {
        swap ( arr[i], arr[i+1]);
    }
    return bubbleSort(arr, i+1, size);
}
int main (){
    int arr[7] ;
    for (int i=0; i<7; i++){
        cin >> arr[i];
    }
    int size =  7;
    bubbleSort (arr, 0, size);
    cout << "Output Array : " << endl;
    for (int i=0; i<7; i++){
        cout << arr[i];
        cout << " " ;
    }

    return 0;
}
