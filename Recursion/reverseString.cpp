#include<iostream>
using namespace std;
string reverseString(string str1, int start, int end) {
    if ( start >= end )  return str1 ;
    else {
        swap (str1[start], str1[end]);
        return reverseString( str1, start+1, end-1 );
      
    }
}
int main (){
    string str1;
    cin >> str1 ;
    int size = str1.length() ;
   
    cout << "The reversed string is : " << reverseString ( str1, 0, size-1) << endl; 

    return 0;
}
