#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int j;
    for (int i=0; i<n; i++){
        {
            char c = 'A';
            for(j=0; j<n-i-1; j++ ){
                cout<< " ";

            }
            for(j; j<n+i; j++ ){
                cout<<c;
                c++;
            }
        }    
        cout<<endl;
    }

    for (int i=n-1; i>0; i--){
        {
            char c = 'A';
            for(j=0; j<n-i; j++ ){
                cout<< " ";

            }
            for(j; j<n+i-1; j++ ){
                cout<<c;
                c++;
            }
        }    
        cout<<endl;
    }

    return 0;
}
