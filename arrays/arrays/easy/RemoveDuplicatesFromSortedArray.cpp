// problem no 26 in leetcode
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

    // logic for the question
    int k = 0;

    for(int j=0; j<n; j++){
        if(numbers[k] != numbers[j]){
            k++;
            numbers[k] = numbers[j];
        }
    }

    //printing the unique array
    for(int i=0; i<=k; i++){
        cout<< numbers[i] << " ";
    }
}