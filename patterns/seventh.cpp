#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int space = n-1;

    for(int i=1; i<=n; i++){
        // adding spaces 
        for(int k=0; k<space; k++){
            cout<< " ";
        }

        space--;

        // printing the pattern
        for(int j=0; j<(2*i)-1; j++){
            cout<< "*";
        }
        cout<<"\n";
    }
}