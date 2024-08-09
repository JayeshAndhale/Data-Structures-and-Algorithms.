#include<iostream> 
using namespace std;
void printCount (int n){
    //base case
    if (n==0) return;

    //recursive call
    else {
        printCount(n-1);
        cout << n << " ";
    }

}
int main (){
    int n;
    cin >> n ;
    
    printCount(n);
}
