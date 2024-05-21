#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
        
    // upper design
    for(int i=0; i<n; i++){        
        for(int j=0; j<=i; j++){
            cout<< "*";
        }

        // printing the whitespaces
        for(int j=0; j<2*(n-i-1); j++){
            cout<< " ";
        }

        for(int j=0; j<=i; j++){
            cout<< "*";
        }

        cout<< "\n";
    }

    n--; //the lower design has one layer less than "n"

    //lower design
    for(int i=n; i>=0; i--){        
        for(int j=0; j<i; j++){
            cout<< "*";
        }

        // printing the whitespaces
        for(int j=0; j<2*((n-i)+1); j++){
            cout<< " ";
        }

        for(int j=0; j<i; j++){
            cout<< "*";
        }

        cout<< "\n";
    }
}