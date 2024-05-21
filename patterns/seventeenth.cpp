#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
        

    for(int i=0; i<n; i++){        
        int ascii = 65;

        // printing the spaces
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }

        for(int j=0; j<=i; j++){
            cout<< char(ascii++);
        }

        ascii-=2;

        for(int j=0; j<i; j++){
            cout<< char(ascii--);
        }

        cout<< "\n";
    }
}