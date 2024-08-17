#include<iostream>
using namespace std;
int aPowerb (int a, int b){
    if (b == 0) return 1;
    if ( b%2 == 0) return a * aPowerb(a,b/2) ;
    else  return a * (aPowerb (a,b/2) * aPowerb(a,b/2)) ;
}
int main (){
    int a, b;
    cin >> a >> b ;

    cout << a << "^" << b << "=" << aPowerb(a, b) ;

    return 0;
}

