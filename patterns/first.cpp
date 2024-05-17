#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    // creating the horizontal stars
    string stars;
    for(int i = 0; i < n; ++i) {
        stars += '*';
    }

    // printing the given pattern
    for(int i=0; i<n; i++){
        cout<<stars<<"\n";
    }
}