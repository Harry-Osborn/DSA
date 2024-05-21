#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int spaces = 2 * (n-1);

    for(int i=1; i<=n; i++){
        int j;

        // printing the first set of numbers
        for(j=1; j<=i; j++){
            cout<< j;
        }

        // printing blankspaces
        for(int k=0; k<spaces; k++){
            cout<< " ";
        }

        spaces-=2;

        // printing the second set of numbers
        for(j--; j>0; j--){ // j-- is done because in the previous j++ has an extra increment
            cout<< j;
        }

        cout<< "\n";
    }
}