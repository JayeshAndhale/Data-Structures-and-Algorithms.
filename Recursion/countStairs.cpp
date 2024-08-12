#include<iostream>
using namespace std;
int countStairs (int nStairs){
    if ( nStairs < 0 ) return 0;
    else if ( nStairs == 0) return 1;

    else return countStairs(nStairs-1) + countStairs(nStairs-2) ;

}
int main (){
    int nStairs;
    cin >> nStairs ;
    int ans = 0;
    ans = countStairs(nStairs);

    cout << "No. Of Ways : " << ans << endl;

    return 0;
}
