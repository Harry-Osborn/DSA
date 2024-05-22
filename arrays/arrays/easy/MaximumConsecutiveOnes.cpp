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
    int maxi = 0;
    int count = 0;

    for(auto it:numbers){
        if(it==0){
            count = 0;
            continue;
        }

        count++;
        maxi = max(maxi, count);
    }

    cout<< maxi;
}