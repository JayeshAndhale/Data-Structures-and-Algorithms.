#include<iostream>
using namespace std;
void printDig (int n){
    switch (n)
    {
    case 0:
        cout << " Zero" ;
        break;
        
    case 1:
        cout << " One" ;
        break;
    case 2:
        cout << " Two" ;
        break;
    case 3:
        cout << " Three" ;
        break;
    case 4:
        cout << " Four" ;
        break;
    case 5:
        cout << " Five" ;
        break;
    case 6:
        cout << " Six" ;
        break;
    case 7:
        cout << " Seven" ;
        break;
    case 8:
        cout << " Eight" ;
        break;
    case 9:
        cout << " Nine" ;
        break;

    }
}
void sayDigits (int n){
    if ( n == 0) return ;
    
    sayDigits (n/10);
    printDig (n%10);


}
int main () {

    int n;
    cin >> n ;
    sayDigits (n) ;
    return 0;
}
