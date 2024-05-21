#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
        
    // upper design
    for(int i=0; i<n; i++){        
        for(int j=0; j<n-i; j++){
            cout<< "*";
        }

        // printing the whitespaces
        for(int j=0; j<2*i; j++){
            cout<< " ";
        }

        for(int j=0; j<n-i; j++){
            cout<< "*";
        }

        cout<< "\n";
    }

    //lower design
    for(int i=n-1; i>=0; i--){        
        for(int j=0; j<n-i; j++){
            cout<< "*";
        }

        // printing the whitespaces
        for(int j=0; j<2*i; j++){
            cout<< " ";
        }

        for(int j=0; j<n-i; j++){
            cout<< "*";
        }

        cout<< "\n";
    }
}