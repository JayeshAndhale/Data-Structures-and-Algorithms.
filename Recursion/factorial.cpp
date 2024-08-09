#include<iostream>
using namespace std;

int factorial (int n){
    // base case
    if (n==2) return 2;

    //recursive relation
    else return ( n * factorial(n-1) );
}
int main (){
    int n ;
    cin >> n ;
    
    cout << "Factorial is " << factorial(n) << endl;
    return 0;
}
