#include<iostream>
using namespace std;
int aPowerb (int a, int b){
    if (b == 1) return a;
    else return a * aPowerb(a,b-1) ;
}
int main (){
    int a, b;
    cin >> a >> b ;

    cout << a << "^" << b << "=" << aPowerb(a, b) ;

    return 0;
}

