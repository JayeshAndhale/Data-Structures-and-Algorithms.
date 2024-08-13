#include<iostream>
using namespace std;
bool linSearch (int *arr, int size, int key){
    if ( size == 1 && arr[0] != key ) return false;
    if ( arr[0] == key) return true ;
    else return ( linSearch(arr+1, size-1, key) );
}
int main (){
    int key ;
    cin >> key ;
    int arr[5];
    for (int i=0; i<5; i++){
        cin >> arr[i];
    }

    if ( linSearch(arr, 5, key) ) cout << "The key is present " << endl ;
    else cout << " Key not present " << endl; 
    return 0;
}
