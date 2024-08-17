#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key ){
    if ( start > end ) return -1;
    int mid = start + (end-start)/2 ;
    if ( arr[mid] == key) return mid;
    else if ( key < arr[mid] ) return binarySearch( arr, start, mid-1, key);
    else return binarySearch( arr, mid+1, end, key);
}
int main (){

    int arr[6] ;
    for (int i=0; i<6; i++){
        cin >> arr[i];
    }
    int key ;
    cin >> key ;
    int  ans = binarySearch( arr, 0, 5, key);
    
    if ( ans == -1) cout << "Element Not Present " << endl;
    else cout << " Element Present at " << ans << " index" << endl;
    return 0;
}
