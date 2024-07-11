#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    int nRows = 4, mCols =3;
    int arr[nRows][mCols] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int j=0;
    for (int i=0; i<mCols; i++){
        while(j<nRows && j>=0){
            cout<< arr[j][i]<< " " ;
            //ans.push_back(arr[j][i]);
            if (i%2) j--;
            else j++;
        }
        if (i%2) j++;
        else j--;
        
    }
    return 0;
}