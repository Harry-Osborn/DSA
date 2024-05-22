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
    int max = INT_MIN;

    for(auto it:numbers){
        if(max<it){
            max = it;
        }    
    }

    cout<< max;
}