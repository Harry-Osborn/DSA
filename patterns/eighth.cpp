#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        // adding spaces 
        for(int k=0; k<n-i; k++){
            cout<< " ";
        }

        // printing the pattern
        for(int j=0; j<(2*i)-1; j++){
            cout<< "*";
        }
        cout<<"\n";
    }
}