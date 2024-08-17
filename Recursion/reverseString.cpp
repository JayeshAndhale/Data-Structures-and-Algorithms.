#include<iostream>
using namespace std;
void reverseString(string& str1, int start) {
    if ( start >= str1.length() - start -1 )  return  ;
    else {
        //swap (str1[start], str1[end]);
        reverseString( str1, start+1 );
        swap (str1[start], str1[str1.length() - start -1]);
      
    }
}
int main (){
    string str1;
    cin >> str1 ;
    int size = str1.length() ;
   
    reverseString ( str1, 0);
    cout << "The reversed string is : " << str1 << endl; 

    return 0;
}
