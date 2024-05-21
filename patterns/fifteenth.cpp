#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    for(int i=0; i<n; i++){
        int ascii = 65;
        
        for(int j=0; j<n-i; j++){
            cout<< char(ascii++);
        }

        cout<< "\n";
    }
}