#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // upper triangle code
    for(int i=1; i<=n; i++){
        // printing the pattern
        for(int j=0; j<i; j++){
            cout<< "*";
        }
        cout<<"\n";
    }


    // lower triangle code
    for(int i=n-1; i>0; i--){
        // printing the pattern
        for(int j=0; j<i; j++){
            cout<< "*";
        }
        cout<<"\n";
    }
}