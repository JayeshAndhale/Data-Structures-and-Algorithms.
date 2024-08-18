#include<iostream>
using namespace std;
void merge (int arr[], int start, int end){
    int mid = start + (end - start)/2;
    //defining lengths of new arrays
    int len1 = mid -start +1;
    int len2 = end - mid ;

    // defining new dynamic arrays
    int* first = new int[len1];
    int* second = new int[len2];
    
    // copying elements in first array
    int ind = start;
    for (int i=0; i<len1; i++){
        first[i] = arr[ind++];
    }

    // copying elements in second array 
    ind = mid +1;
    for (int j=0; j<len2; j++){
        second[j] = arr[ind++];
    }

    // copying elements in sorted order in og array
    ind = start;
    int ind1 =0;
    int ind2 = 0;

    while( ind1 < len1 && ind2 < len2) {
        if ( first[ind1] < second[ind2])
        arr[ind++] = first[ind1++];
        else 
        arr[ind++] = second[ind2++];
    }

    // copying remaining extra elements in og array
    //if extra el left in first
    while ( ind1 < len1){
        arr[ind++] = first[ind1++];
    }
    
    //if extra el left in second
    while ( ind2 < len2){
        arr[ind++] = second[ind2++];
    }
}
void mergeSort (int arr[], int start, int end){
    if ( start >= end ) return;
    int mid = start + (end -start)/2 ;
    mergeSort(arr, start, mid );
    mergeSort(arr, mid+1, end );

    merge(arr, start, end);

}
int main (){
    int arr[7] ;
    for (int i=0; i<7; i++){
        cin >> arr[i];
    }
    int size =  7;
    mergeSort (arr, 0, 6);
    cout << "Output Array : " << endl;
    for (int i=0; i<7; i++){
        cout << arr[i];
        cout << " " ;
    }

    return 0;
}
