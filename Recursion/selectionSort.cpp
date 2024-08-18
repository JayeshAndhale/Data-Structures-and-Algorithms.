#include<iostream>
using namespace std;
int findMin (int arr[], int size){
  //  int min = INT_MAX;
    int ans=0;
    for (int i=0; i<size-1; i++){
        if (arr[i] < arr[ans] ) {
            ans = i;
        }
    }
    return ans;
}

void selectionSort( int arr[], int size){
    if (size == 0) return ;
    int min = findMin (arr, size);
    swap ( arr[0], arr[min]);
    return selectionSort( arr + 1, size-1);

}
int main (){
    int arr[7] ;
    for (int i=0; i<7; i++){
        cin >> arr[i];
    }
    int size =  7;
    selectionSort (arr, size);
    cout << "Output Array : " << endl;
    for (int i=0; i<7; i++){
        cout << arr[i];
        cout << " " ;
    }

    return 0;
}
