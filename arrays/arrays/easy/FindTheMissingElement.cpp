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
    n = n+1;
    int Nsum = (n*(n-1))/2;

    //sum of elements of the given array
    int sum = 0;

    for(auto it:numbers){
        sum += it;
    }

    cout<< Nsum-sum;
}