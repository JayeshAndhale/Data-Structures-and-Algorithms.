#include<iostream>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    int firstOcc, lastOcc;
    pair<int, int> vec;
    
    int flag =0;
    
    while (start <= end){
      if (arr[mid] == k) {
        firstOcc = mid;
        end = mid-1;
        mid = start + (end - start)/2;
        flag = 1;
      }

      else  if ( k > arr[mid]) start = mid +1;
      else if ( k < arr[mid]) end = mid -1;
        mid = start + (end - start)/2; 
    }
      start = 0, end = n-1;
      mid = start + (end - start)/2;
    //lastOccurence
    while (start <= end){
        if (arr[mid] == k) {
        lastOcc = mid;
        start = mid + 1;
        mid = start + (end - start) / 2;
        }

        else if (k > arr[mid])
        start = mid + 1;
        else if (k < arr[mid])
        end = mid - 1;
        mid = start + (end - start) / 2;
    }
  

    vec.first = firstOcc;
    vec.second = lastOcc;
    pair<int, int> nullify;
    nullify.first = -1;
    nullify.second = -1;
    if (flag ==0) return nullify;
    else if (flag ==1) return vec; 
     


}
int main (){
int n;
cin >> n;
int vector<int> arr(n);
int num;
for (int i=0; i<n; i++){
cin>> num;
arr.push_back(num);
}
int k;
cin >> k;
firstAndLastPosition( arr, n, k);
return 0;

}
