#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers;

    int n;
    cin>> n;

    int num;
    for(int i=0; i<n; i++){
        cin>> num;
        numbers.push_back(num);
    }

    // the actual logic for the question
     int XOR = 0;

    for(auto it:numbers){
        XOR ^= it;
    }

    cout<< XOR;
}